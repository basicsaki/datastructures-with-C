#include "bm.h"

char *graph_ban_text[] = {
    " #####\n"
    "#     #  #####     ##    #####   #    #\n"
    "#        #    #   #  #   #    #  #    #\n"
    "#  ####  #    #  #    #  #    #  ######\n"
    "#     #  #####   ######  #####   #    #\n"
    "#     #  #   #   #    #  #       #    #\n"
    " #####   #    #  #    #  #       #    #\n"};
//function definations
void graph_banner()
{
    // graph_clear_menu("Graph", 0);
    puts(*graph_ban_text);
}
