#include "bm.h"

char *general_ban_text[] = {
    " #####\n"
    "#     #  ######  #    #  ######  #####     ##    #\n"
    "#        #       ##   #  #       #    #   #  #   #\n"
    "#  ####  #####   # #  #  #####   #    #  #    #  #\n"
    "#     #  #       #  # #  #       #####   ######  #\n"
    "#     #  #       #   ##  #       #   #   #    #  #\n"
    " #####   ######  #    #  ######  #    #  #    #  ######\n"
    "\n"
    "#######\n"
    "   #     #####   ######  ######\n"
    "   #     #    #  #       #\n"
    "   #     #    #  #####   #####\n"
    "   #     #####   #       #\n"
    "   #     #   #   #       #\n"
    "   #     #    #  ######  ######\n"}; //function definations
void general_banner()
{
    // general_clear_menu("Tree", 0);
    puts(*general_ban_text);
}
