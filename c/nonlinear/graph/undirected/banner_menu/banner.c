#include "bm.h"

char *undirected_ban_text[] = {
    "#     #\n"
    "#     #  #    #  #####      #    #####   ######   ####    #####  ######  #####\n"
    "#     #  ##   #  #    #     #    #    #  #       #    #     #    #       #    #\n"
    "#     #  # #  #  #    #     #    #    #  #####   #          #    #####   #    #\n"
    "#     #  #  # #  #    #     #    #####   #       #          #    #       #    #\n"
    "#     #  #   ##  #    #     #    #   #   #       #    #     #    #       #    #\n"
    " #####   #    #  #####      #    #    #  ######   ####      #    ######  #####\n"

};
//function definations
void undirected_banner()
{
    undirected_clear_menu("Undirected Graph", 0);
    puts(*undirected_ban_text);
}
