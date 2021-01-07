#include "bm.h"

char *arrayqueue_ban_text[] = {
    " #####\n"
    "#     #  #    #  ######  #    #  ######\n"
    "#     #  #    #  #       #    #  #\n"
    "#     #  #    #  #####   #    #  #####\n"
    "#   # #  #    #  #       #    #  #\n"
    "#    #   #    #  #       #    #  #\n"
    " #### #   ####   ######   ####   ######\n"};
//function definations
void arrayqueue_banner()
{
    // arrayqueue_clear_menu("", 0);
    puts(*arrayqueue_ban_text);
}
