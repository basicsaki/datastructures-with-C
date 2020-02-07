#include "bm.h"

char *binarysearchtree_ban_text[] = {
    "######                                           #####\n"
    "#     #     #    #    #    ##    #####    #   # #     #  #####    ####   #    #\n"
    "#     #     #    ##   #   #  #   #    #    # #  #        #    #  #    #  #    #\n"
    "######      #    # #  #  #    #  #    #     #    #####   #    #  #       ######\n"
    "#     #     #    #  # #  ######  #####      #         #  #####   #       #    #\n"
    "#     #     #    #   ##  #    #  #   #      #   #     #  #   #   #    #  #    #\n"
    "######      #    #    #  #    #  #    #     #    #####   #    #   ####   #    #\n"};
//function definations
void binarysearchtree_banner()
{
    // binarysearchtree_clear_menu("Tree", 0);
    puts(*binarysearchtree_ban_text);
}
