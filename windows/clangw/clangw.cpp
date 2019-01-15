// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include <stdio.h>
#include <fstream>
#include <streambuf>
#include <string>

/**
 * The following table list the command line options
 * generated by nmake/visual studio cmake generators,
 * and their corresponding clang mapping.
 */
struct option_map
{
    const char* from;
    const char* to;
};

static option_map _table[] = {{"/nologo", ""},
                              {"/TP", ""},
                              {"/TP", ""},
                              {"/DWIN32", ""},
                              {"/D_WINDOWS", ""},
                              {"/W3", ""},
                              {"/GR", ""},
                              {"/EHsc", ""},
                              {"/MD", ""},
                              {"/MDd", ""},
                              {"/DNDEBUG", "-DNDEBUG"},
                              {"/Zi", "-g"},
                              {"/Ob0", ""},
                              {"/Ob1", ""},
                              {"/Ob2", ""},
                              {"/Od", ""},
                              {"/O2", ""},
                              {"/RTC1", ""},
                              {"/FS", ""},
                              {"-std:c++11", "-std=c++11"},
                              {"-std:c++14", "-std=c++14"},
                              {"-std:c++17", "-std=c++17"},
                              {"/showIncludes", ""}};

static const size_t _table_size = sizeof(_table) / sizeof(_table[0]);

/**
 * If an option is of the form:
 *     -D="..."
 * transform it to
 *     -D=\"...\"
 * since we are passing it back to the system command to invoke clang
 */
static std::string __escape_quotes(const std::string& option)
{
    // Check if it is a -D option.
    if (option.size() > 2 && option[0] == '-' && option[1] == 'D')
    {
        // Search for the = character.
        size_t i = 2;
        while (i < option.size() && option[i] != '=')
            ++i;

        if (i == option.size())
        {
            // No = character found.
            return option;
        }

        // Copy till -DNAME=
        std::string escaped_option = option.substr(0, i + 1);

        // Escape any double-quote character.
        while (++i < option.size())
        {
            if (option[i] == '"')
            {
                escaped_option.push_back('\\');
            }
            escaped_option.push_back(option[i]);
        }
        return escaped_option;
    }
    return option;
}

int main(int argc, char** argv)
{
    std::string cmd = "clang";

    // Has /Zi or /O2 been specified?
    bool debug = false;
    bool optimize = false;

    // Transform all the arguments.
    for (int i = 1; i < argc; ++i)
    {
        std::string option = argv[i];

        // Look for a direct mapping
        bool match = false;
        for (size_t j = 0; j < _table_size; ++j)
        {
            if (option == _table[j].from)
            {
                match = true;
                debug = (option == "/Zi");
                optimize = (option == "/O2");
                option = _table[j].to;
                break;
            }
        }

        cmd += " " + __escape_quotes(option);
    }

    // Debug, Release and ReleaseWithDebug build-types
    // are supported.
    if (optimize)
    {
        cmd += debug ? " -Og " : " - O2 ";
    }

    return system(cmd.c_str());
}