#include "bm.h"

char *directed_ban_text[] = {
    "######\n"
    "#     #     #    #####   ######   ####    #####  ######  #####\n"
    "#     #     #    #    #  #       #    #     #    #       #    #\n"
    "#     #     #    #    #  #####   #          #    #####   #    #\n"
    "#     #     #    #####   #       #          #    #       #    #\n"
    "#     #     #    #   #   #       #    #     #    #       #    #\n"
    "######      #    #    #  ######   ####      #    ######  #####\n"

};
//function definations
void directed_banner()
{
    // directed_clear_menu("Directed Graph", 0);
    puts(*directed_ban_text);
}
