#include "bm.h"

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
    float_clear_menu("Float", 0);
    puts(*float_ban_text);
}
