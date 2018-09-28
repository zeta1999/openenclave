// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

extern "C" int test_functional_argv_c(int argc, const char* argv[]);
extern "C" int test_functional_basename_c(int argc, const char* argv[]);
extern "C" int test_functional_clock_gettime_c(int argc, const char* argv[]);
extern "C" int test_functional_dirname_c(int argc, const char* argv[]);
extern "C" int test_functional_env_c(int argc, const char* argv[]);
extern "C" int test_functional_qsort_c(int argc, const char* argv[]);
extern "C" int test_functional_search_insque_c(int argc, const char* argv[]);
extern "C" int test_functional_search_lsearch_c(int argc, const char* argv[]);
extern "C" int test_functional_search_tsearch_c(int argc, const char* argv[]);
extern "C" int test_functional_snprintf_c(int argc, const char* argv[]);
extern "C" int test_functional_sscanf_c(int argc, const char* argv[]);
extern "C" int test_functional_sscanf_long_c(int argc, const char* argv[]);
extern "C" int test_functional_string_c(int argc, const char* argv[]);
extern "C" int test_functional_string_memcpy_c(int argc, const char* argv[]);
extern "C" int test_functional_string_memmem_c(int argc, const char* argv[]);
extern "C" int test_functional_string_memset_c(int argc, const char* argv[]);
extern "C" int test_functional_string_strchr_c(int argc, const char* argv[]);
extern "C" int test_functional_string_strcspn_c(int argc, const char* argv[]);
extern "C" int test_functional_string_strstr_c(int argc, const char* argv[]);
extern "C" int test_functional_strtod_c(int argc, const char* argv[]);
extern "C" int test_functional_strtod_long_c(int argc, const char* argv[]);
extern "C" int test_functional_strtod_simple_c(int argc, const char* argv[]);
extern "C" int test_functional_strtof_c(int argc, const char* argv[]);
extern "C" int test_functional_strtol_c(int argc, const char* argv[]);
extern "C" int test_functional_strtold_c(int argc, const char* argv[]);
extern "C" int test_functional_tls_align_c(int argc, const char* argv[]);
extern "C" int test_functional_udiv_c(int argc, const char* argv[]);
extern "C" int test_functional_wcsstr_c(int argc, const char* argv[]);
extern "C" int test_functional_wcstol_c(int argc, const char* argv[]);
extern "C" int test_math_acos_c(int argc, const char* argv[]);
extern "C" int test_math_acosf_c(int argc, const char* argv[]);
extern "C" int test_math_acoshf_c(int argc, const char* argv[]);
extern "C" int test_math_acoshl_c(int argc, const char* argv[]);
extern "C" int test_math_acosl_c(int argc, const char* argv[]);
extern "C" int test_math_asin_c(int argc, const char* argv[]);
extern "C" int test_math_asinf_c(int argc, const char* argv[]);
extern "C" int test_math_asinhf_c(int argc, const char* argv[]);
extern "C" int test_math_asinhl_c(int argc, const char* argv[]);
extern "C" int test_math_asinl_c(int argc, const char* argv[]);
extern "C" int test_math_atan2_c(int argc, const char* argv[]);
extern "C" int test_math_atan2f_c(int argc, const char* argv[]);
extern "C" int test_math_atan2l_c(int argc, const char* argv[]);
extern "C" int test_math_atan_c(int argc, const char* argv[]);
extern "C" int test_math_atanf_c(int argc, const char* argv[]);
extern "C" int test_math_atanh_c(int argc, const char* argv[]);
extern "C" int test_math_atanhf_c(int argc, const char* argv[]);
extern "C" int test_math_atanhl_c(int argc, const char* argv[]);
extern "C" int test_math_atanl_c(int argc, const char* argv[]);
extern "C" int test_math_cbrt_c(int argc, const char* argv[]);
extern "C" int test_math_cbrtf_c(int argc, const char* argv[]);
extern "C" int test_math_cbrtl_c(int argc, const char* argv[]);
extern "C" int test_math_ceil_c(int argc, const char* argv[]);
extern "C" int test_math_ceilf_c(int argc, const char* argv[]);
extern "C" int test_math_ceill_c(int argc, const char* argv[]);
extern "C" int test_math_copysign_c(int argc, const char* argv[]);
extern "C" int test_math_copysignf_c(int argc, const char* argv[]);
extern "C" int test_math_copysignl_c(int argc, const char* argv[]);
extern "C" int test_math_cos_c(int argc, const char* argv[]);
extern "C" int test_math_cosf_c(int argc, const char* argv[]);
extern "C" int test_math_cosh_c(int argc, const char* argv[]);
extern "C" int test_math_coshf_c(int argc, const char* argv[]);
extern "C" int test_math_coshl_c(int argc, const char* argv[]);
extern "C" int test_math_cosl_c(int argc, const char* argv[]);
extern "C" int test_math_drem_c(int argc, const char* argv[]);
extern "C" int test_math_dremf_c(int argc, const char* argv[]);
extern "C" int test_math_erf_c(int argc, const char* argv[]);
extern "C" int test_math_erfc_c(int argc, const char* argv[]);
extern "C" int test_math_erfcf_c(int argc, const char* argv[]);
extern "C" int test_math_erfcl_c(int argc, const char* argv[]);
extern "C" int test_math_erff_c(int argc, const char* argv[]);
extern "C" int test_math_erfl_c(int argc, const char* argv[]);
extern "C" int test_math_exp10_c(int argc, const char* argv[]);
extern "C" int test_math_exp10f_c(int argc, const char* argv[]);
extern "C" int test_math_exp10l_c(int argc, const char* argv[]);
extern "C" int test_math_exp2_c(int argc, const char* argv[]);
extern "C" int test_math_exp2f_c(int argc, const char* argv[]);
extern "C" int test_math_exp2l_c(int argc, const char* argv[]);
extern "C" int test_math_exp_c(int argc, const char* argv[]);
extern "C" int test_math_expf_c(int argc, const char* argv[]);
extern "C" int test_math_expl_c(int argc, const char* argv[]);
extern "C" int test_math_expm1_c(int argc, const char* argv[]);
extern "C" int test_math_expm1f_c(int argc, const char* argv[]);
extern "C" int test_math_expm1l_c(int argc, const char* argv[]);
extern "C" int test_math_fabs_c(int argc, const char* argv[]);
extern "C" int test_math_fabsf_c(int argc, const char* argv[]);
extern "C" int test_math_fabsl_c(int argc, const char* argv[]);
extern "C" int test_math_fenv_c(int argc, const char* argv[]);
extern "C" int test_math_floor_c(int argc, const char* argv[]);
extern "C" int test_math_floorf_c(int argc, const char* argv[]);
extern "C" int test_math_floorl_c(int argc, const char* argv[]);
extern "C" int test_math_fma_c(int argc, const char* argv[]);
extern "C" int test_math_fmaxl_c(int argc, const char* argv[]);
extern "C" int test_math_fminl_c(int argc, const char* argv[]);
extern "C" int test_math_fmod_c(int argc, const char* argv[]);
extern "C" int test_math_fmodf_c(int argc, const char* argv[]);
extern "C" int test_math_fmodl_c(int argc, const char* argv[]);
extern "C" int test_math_fpclassify_c(int argc, const char* argv[]);
extern "C" int test_math_frexp_c(int argc, const char* argv[]);
extern "C" int test_math_frexpf_c(int argc, const char* argv[]);
extern "C" int test_math_frexpl_c(int argc, const char* argv[]);
extern "C" int test_math_hypot_c(int argc, const char* argv[]);
extern "C" int test_math_hypotf_c(int argc, const char* argv[]);
extern "C" int test_math_hypotl_c(int argc, const char* argv[]);
extern "C" int test_math_isless_c(int argc, const char* argv[]);
extern "C" int test_math_j0f_c(int argc, const char* argv[]);
extern "C" int test_math_j1_c(int argc, const char* argv[]);
extern "C" int test_math_j1f_c(int argc, const char* argv[]);
extern "C" int test_math_ldexp_c(int argc, const char* argv[]);
extern "C" int test_math_ldexpf_c(int argc, const char* argv[]);
extern "C" int test_math_ldexpl_c(int argc, const char* argv[]);
extern "C" int test_math_lgammal_c(int argc, const char* argv[]);
extern "C" int test_math_lgammal_r_c(int argc, const char* argv[]);
extern "C" int test_math_llrint_c(int argc, const char* argv[]);
extern "C" int test_math_llrintf_c(int argc, const char* argv[]);
extern "C" int test_math_llrintl_c(int argc, const char* argv[]);
extern "C" int test_math_llround_c(int argc, const char* argv[]);
extern "C" int test_math_llroundf_c(int argc, const char* argv[]);
extern "C" int test_math_llroundl_c(int argc, const char* argv[]);
extern "C" int test_math_log10_c(int argc, const char* argv[]);
extern "C" int test_math_log10f_c(int argc, const char* argv[]);
extern "C" int test_math_log10l_c(int argc, const char* argv[]);
extern "C" int test_math_log1pl_c(int argc, const char* argv[]);
extern "C" int test_math_log2_c(int argc, const char* argv[]);
extern "C" int test_math_log2f_c(int argc, const char* argv[]);
extern "C" int test_math_log2l_c(int argc, const char* argv[]);
extern "C" int test_math_logb_c(int argc, const char* argv[]);
extern "C" int test_math_logbf_c(int argc, const char* argv[]);
extern "C" int test_math_logbl_c(int argc, const char* argv[]);
extern "C" int test_math_log_c(int argc, const char* argv[]);
extern "C" int test_math_logf_c(int argc, const char* argv[]);
extern "C" int test_math_logl_c(int argc, const char* argv[]);
extern "C" int test_math_lrint_c(int argc, const char* argv[]);
extern "C" int test_math_lrintf_c(int argc, const char* argv[]);
extern "C" int test_math_lrintl_c(int argc, const char* argv[]);
extern "C" int test_math_lround_c(int argc, const char* argv[]);
extern "C" int test_math_lroundf_c(int argc, const char* argv[]);
extern "C" int test_math_lroundl_c(int argc, const char* argv[]);
extern "C" int test_math_modf_c(int argc, const char* argv[]);
extern "C" int test_math_modff_c(int argc, const char* argv[]);
extern "C" int test_math_modfl_c(int argc, const char* argv[]);
extern "C" int test_math_nearbyint_c(int argc, const char* argv[]);
extern "C" int test_math_nearbyintf_c(int argc, const char* argv[]);
extern "C" int test_math_nearbyintl_c(int argc, const char* argv[]);
extern "C" int test_math_nextafter_c(int argc, const char* argv[]);
extern "C" int test_math_nextafterf_c(int argc, const char* argv[]);
extern "C" int test_math_nextafterl_c(int argc, const char* argv[]);
extern "C" int test_math_nexttoward_c(int argc, const char* argv[]);
extern "C" int test_math_nexttowardf_c(int argc, const char* argv[]);
extern "C" int test_math_nexttowardl_c(int argc, const char* argv[]);
extern "C" int test_math_pow10_c(int argc, const char* argv[]);
extern "C" int test_math_pow10f_c(int argc, const char* argv[]);
extern "C" int test_math_pow10l_c(int argc, const char* argv[]);
extern "C" int test_math_remainder_c(int argc, const char* argv[]);
extern "C" int test_math_remainderf_c(int argc, const char* argv[]);
extern "C" int test_math_remainderl_c(int argc, const char* argv[]);
extern "C" int test_math_remquo_c(int argc, const char* argv[]);
extern "C" int test_math_remquof_c(int argc, const char* argv[]);
extern "C" int test_math_remquol_c(int argc, const char* argv[]);
extern "C" int test_math_rint_c(int argc, const char* argv[]);
extern "C" int test_math_rintf_c(int argc, const char* argv[]);
extern "C" int test_math_rintl_c(int argc, const char* argv[]);
extern "C" int test_math_round_c(int argc, const char* argv[]);
extern "C" int test_math_roundf_c(int argc, const char* argv[]);
extern "C" int test_math_roundl_c(int argc, const char* argv[]);
extern "C" int test_math_scalb_c(int argc, const char* argv[]);
extern "C" int test_math_scalbf_c(int argc, const char* argv[]);
extern "C" int test_math_scalbln_c(int argc, const char* argv[]);
extern "C" int test_math_scalblnf_c(int argc, const char* argv[]);
extern "C" int test_math_scalblnl_c(int argc, const char* argv[]);
extern "C" int test_math_sin_c(int argc, const char* argv[]);
extern "C" int test_math_sincos_c(int argc, const char* argv[]);
extern "C" int test_math_sincosf_c(int argc, const char* argv[]);
extern "C" int test_math_sincosl_c(int argc, const char* argv[]);
extern "C" int test_math_sinf_c(int argc, const char* argv[]);
extern "C" int test_math_sinhf_c(int argc, const char* argv[]);
extern "C" int test_math_sinl_c(int argc, const char* argv[]);
extern "C" int test_math_sqrt_c(int argc, const char* argv[]);
extern "C" int test_math_sqrtf_c(int argc, const char* argv[]);
extern "C" int test_math_sqrtl_c(int argc, const char* argv[]);
extern "C" int test_math_tan_c(int argc, const char* argv[]);
extern "C" int test_math_tanf_c(int argc, const char* argv[]);
extern "C" int test_math_tanh_c(int argc, const char* argv[]);
extern "C" int test_math_tanhf_c(int argc, const char* argv[]);
extern "C" int test_math_tanhl_c(int argc, const char* argv[]);
extern "C" int test_math_tanl_c(int argc, const char* argv[]);
extern "C" int test_math_tgammal_c(int argc, const char* argv[]);
extern "C" int test_math_trunc_c(int argc, const char* argv[]);
extern "C" int test_math_truncf_c(int argc, const char* argv[]);
extern "C" int test_math_truncl_c(int argc, const char* argv[]);
extern "C" int test_regression_fpclassify_invalid_ld80_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_iswspace_null_c(int argc, const char* argv[]);
extern "C" int test_regression_lrand48_signextend_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_malloc_0_c(int argc, const char* argv[]);
extern "C" int test_regression_mbsrtowcs_overflow_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_memmem_oob_c(int argc, const char* argv[]);
extern "C" int test_regression_memmem_oob_read_c(int argc, const char* argv[]);
extern "C" int test_regression_printf_1e9_oob_c(int argc, const char* argv[]);
extern "C" int test_regression_printf_fmt_g_round_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_printf_fmt_g_zeros_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_printf_fmt_n_c(int argc, const char* argv[]);
extern "C" int test_regression_scanf_bytes_consumed_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_scanf_match_literal_eof_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_scanf_nullbyte_char_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_wcsncpy_read_overflow_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_wcsstr_false_negative_c(
    int argc,
    const char* argv[]);
extern "C" int test_functional_clocale_mbfuncs_c(int argc, const char* argv[]);
extern "C" int test_functional_iconv_open_c(int argc, const char* argv[]);
extern "C" int test_functional_memstream_c(int argc, const char* argv[]);
extern "C" int test_math_scalbn_c(int argc, const char* argv[]);
extern "C" int test_math_scalbnf_c(int argc, const char* argv[]);
extern "C" int test_math_scalbnl_c(int argc, const char* argv[]);
extern "C" int test_musl_pleval_c(int argc, const char* argv[]);
extern "C" int test_regression_fgets_eof_c(int argc, const char* argv[]);
extern "C" int test_regression_iconv_roundtrips_c(int argc, const char* argv[]);
extern "C" int test_regression_putenv_doublefree_c(
    int argc,
    const char* argv[]);
extern "C" int test_regression_strverscmp_c(int argc, const char* argv[]);
extern "C" int test_functional_random_c(int argc, const char* argv[]);
extern "C" int test_functional_time_c(int argc, const char* argv[]);
