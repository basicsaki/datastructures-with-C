#include "bm.h"

char *character_ban_text[] = {
    " #####\n"
    "#     #  #    #    ##    #####     ##     ####    #####  ######  #####\n"
    "#        #    #   #  #   #    #   #  #   #    #     #    #       #    #\n"
    "#        ######  #    #  #    #  #    #  #          #    #####   #    #\n"
    "#        #    #  ######  #####   ######  #          #    #       #####\n"
    "#     #  #    #  #    #  #   #   #    #  #    #     #    #       #   #\n"
    " #####   #    #  #    #  #    #  #    #   ####      #    ######  #    #\n"};
//function definations
void character_banner()
{
    // character_clear_menu("", 0);
    puts(*character_ban_text);
}
