#include "bm.h"

char *recursive_ban_text[] = {
    "######\n"
    "#     #  ######   ####   #    #  #####    ####      #    #    #  ######\n"
    "#     #  #       #    #  #    #  #    #  #          #    #    #  #\n"
    "######   #####   #       #    #  #    #   ####      #    #    #  #####\n"
    "#   #    #       #       #    #  #####        #     #    #    #  #\n"
    "#    #   #       #    #  #    #  #   #   #    #     #     #  #   #\n"
    "#     #  ######   ####    ####   #    #   ####      #      ##    ######\n"

};
//function definations
void recursive_banner()
{
    puts(*recursive_ban_text);
}
