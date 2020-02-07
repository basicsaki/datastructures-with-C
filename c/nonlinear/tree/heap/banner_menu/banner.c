#include "bm.h"

char *heap_ban_text[] = {
    "#     #\n"
    "#     #  ######    ##    #####\n"
    "#     #  #        #  #   #    #\n"
    "#######  #####   #    #  #    #\n"
    "#     #  #       ######  #####\n"
    "#     #  #       #    #  #\n"
    "#     #  ######  #    #  #\n"};
//function definations
void heap_banner()
{
    // heap_clear_menu("Tree", 0);
    puts(*heap_ban_text);
}
