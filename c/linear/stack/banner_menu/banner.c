#include "bm.h"

char *stack_ban_text[] = {
    " #####\n"
    "#     #   #####    ##     ####   #    #\n"
    "#           #     #  #   #    #  #   #\n"
    " #####      #    #    #  #       ####\n"
    "      #     #    ######  #       #  #\n"
    "#     #     #    #    #  #    #  #   #\n"
    " #####      #    #    #   ####   #    #\n"};
//function definations
void stack_banner()
{
    stack_clear_menu("stack", 0);
    puts(*stack_ban_text);
}
