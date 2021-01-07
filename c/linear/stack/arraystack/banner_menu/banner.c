#include "bm.h"

char *arraystack_ban_text[] = {
    " #####\n"
    "#     #   #####    ##     ####   #    #\n"
    "#           #     #  #   #    #  #   #\n"
    " #####      #    #    #  #       ####\n"
    "      #     #    ######  #       #  #\n"
    "#     #     #    #    #  #    #  #   #\n"
    " #####      #    #    #   ####   #    #\n"};
//function definations
void arraystack_banner()
{
    // arraystack_clear_menu("", 0);
    puts(*arraystack_ban_text);
}
