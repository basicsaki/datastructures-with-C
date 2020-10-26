#include "bm.h"

char *binarysearch_ban_text[] = {
    "######                                           #####\n"
    "#     #     #    #    #    ##    #####    #   # #     #  #####    ####   #    #\n"
    "#     #     #    ##   #   #  #   #    #    # #  #        #    #  #    #  #    #\n"
    "######      #    # #  #  #    #  #    #     #    #####   #    #  #       ######\n"
    "#     #     #    #  # #  ######  #####      #         #  #####   #       #    #\n"
    "#     #     #    #   ##  #    #  #   #      #   #     #  #   #   #    #  #    #\n"
    "######      #    #    #  #    #  #    #     #    #####   #    #   ####   #    #\n"};
//function definations
void binarysearch_banner()
{
    binarysearch_clear_menu("Tree", 0);
    puts(*binarysearch_ban_text);
}
