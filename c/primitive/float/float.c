//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../common.h"
// #include "./linkedlist/linked.h"

//main menu
void floatmain()
{
    int floatexit = 0, float_option;
    float flt;
    // float_clear_menu("", 1);
    float_banner();
    float_submenu();
    while (floatexit == 0)
    {
        scanf("%d", &float_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (float_option)
        {
        case 1:
            float_clear_menu("Float: Basic Info", 1);
            printf("Float Limits: \n");
            printf("The size of float (single precision float data type) is 4 bytes. And the size of double (double precision float data type) is 8 bytes.\n");
            printf("FLT_RADIX    = %d\n", FLT_RADIX);
            printf("DECIMAL_DIG  = %d\n", DECIMAL_DIG);
            printf("FLT_MIN      = %e\n", FLT_MIN);
            printf("FLT_MAX      = %e\n", FLT_MAX);
            printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
            printf("FLT_DIG      = %d\n", FLT_DIG);
            printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
            printf("FLT_MIN_EXP  = %d\n", FLT_MIN_EXP);
            printf("FLT_MIN_10_EXP  = %d\n", FLT_MIN_10_EXP);
            printf("FLT_MAX_EXP     = %d\n", FLT_MAX_EXP);
            printf("FLT_MAX_10_EXP  = %d\n", FLT_MAX_10_EXP);
            printf("FLT_ROUNDS      = %d\n", FLT_ROUNDS);
            printf("FLT_EVAL_METHOD = %d\n", FLT_EVAL_METHOD);
            press_enter_to_continue();
            float_clear_menu("Float: Menu", 1);

            break;
        case 2:
            float_clear_menu("Float: Insert", 1);
            printf("Please enter the float number\n");
            scanf("%f", &flt);
            press_enter_to_continue();
            float_clear_menu("Float: Menu", 1);
            // float_clear_menu("Float data type options", 1);
            break;
        case 3:
            float_clear_menu("Float: Display", 1);
            printf("Float value: %f(MemLocation: %p Sizeof: %zu)\n", flt, &flt, sizeof(flt));
            press_enter_to_continue();
            float_clear_menu("Float: Menu", 1);

            break;
        case 0:
            // clear();
            floatexit = 1;
            float_clear_menu("Primitive: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            float_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
