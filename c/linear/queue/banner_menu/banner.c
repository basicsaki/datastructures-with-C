#include "bm.h"

char *queue_ban_text[] = {
    " #####\n"
    "#     #  #    #  ######  #    #  ######\n"
    "#     #  #    #  #       #    #  #\n"
    "#     #  #    #  #####   #    #  #####\n"
    "#   # #  #    #  #       #    #  #\n"
    "#    #   #    #  #       #    #  #\n"
    " #### #   ####   ######   ####   ######\n"};
//function definations
void queue_banner()
{
    queue_clear_menu("", 0);
    puts(*queue_ban_text);
}
