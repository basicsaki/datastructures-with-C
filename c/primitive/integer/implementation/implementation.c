#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <limits.h>
#include <float.h>

void integerInfo()
{
    printf("Integer Limits: \n");
    printf("The size of int is usually 4 bytes (32 bits). And, it can take 232 distinct states from -2147483648 to 2147483647\n");
    printf("CHAR_BIT   = %d\n", CHAR_BIT);
    printf("MB_LEN_MAX = %d\n", MB_LEN_MAX);
    printf("\n");

    printf("CHAR_MIN   = %+d\n", CHAR_MIN);
    printf("CHAR_MAX   = %+d\n", CHAR_MAX);
    printf("SCHAR_MIN  = %+d\n", SCHAR_MIN);
    printf("SCHAR_MAX  = %+d\n", SCHAR_MAX);
    printf("UCHAR_MAX  = %u\n", UCHAR_MAX);
    printf("\n");

    printf("SHRT_MIN   = %+d\n", SHRT_MIN);
    printf("SHRT_MAX   = %+d\n", SHRT_MAX);
    printf("USHRT_MAX  = %u\n", USHRT_MAX);
    printf("\n");

    printf("INT_MIN    = %+d\n", INT_MIN);
    printf("INT_MAX    = %+d\n", INT_MAX);
    printf("UINT_MAX   = %u\n", UINT_MAX);
    printf("\n");

    printf("LONG_MIN   = %+ld\n", LONG_MIN);
    printf("LONG_MAX   = %+ld\n", LONG_MAX);
    printf("ULONG_MAX  = %lu\n", ULONG_MAX);
    printf("\n");

    printf("LLONG_MIN  = %+lld\n", LLONG_MIN);
    printf("LLONG_MAX  = %+lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
    printf("\n");
};