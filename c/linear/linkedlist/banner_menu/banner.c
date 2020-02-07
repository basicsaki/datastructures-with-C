#include "bm.h"

char *linked_ban_text[] = {
    "#\n"
    "#           #    #    #  #    #  ######  #####   #          #     ####    #####\n"
    "#           #    ##   #  #   #   #       #    #  #          #    #          #\n"
    "#           #    # #  #  ####    #####   #    #  #          #     ####      #\n"
    "#           #    #  # #  #  #    #       #    #  #          #         #     #\n"
    "#           #    #   ##  #   #   #       #    #  #          #    #    #     #\n"
    "#######     #    #    #  #    #  ######  #####   ######     #     ####      #\n"};
//function definations
void linked_banner()
{
    // linked_clear_menu("", 0);
    puts(*linked_ban_text);
}
