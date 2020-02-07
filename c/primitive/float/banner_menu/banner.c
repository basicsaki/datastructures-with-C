#include "bm.h"
#include "string.h"

char *float_ban_text[] = {
    "#######\n"
    "#        #        ####     ##     #####\n"
    "#        #       #    #   #  #      #\n"
    "#####    #       #    #  #    #     #\n"
    "#        #       #    #  ######     #\n"
    "#        #       #    #  #    #     #\n"
    "#        ######   ####   #    #     #\n"};
//function definations
void float_banner()
{
    // float_clear_menu("", 0);
    puts(*float_ban_text);
}
