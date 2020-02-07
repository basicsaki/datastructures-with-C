#include "bm.h"

char *pointer_ban_text[] = {
    "######\n"
    "#     #   ####      #    #    #   #####  ######  #####\n"
    "#     #  #    #     #    ##   #     #    #       #    #\n"
    "######   #    #     #    # #  #     #    #####   #    #\n"
    "#        #    #     #    #  # #     #    #       #####\n"
    "#        #    #     #    #   ##     #    #       #   #\n"
    "#         ####      #    #    #     #    ######  #    #\n"};
//function definations
void pointer_banner()
{
    // pointer_clear_menu("", 0);
    puts(*pointer_ban_text);
}
