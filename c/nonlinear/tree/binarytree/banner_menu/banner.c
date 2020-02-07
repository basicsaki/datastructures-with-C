#include "bm.h"

char *binary_ban_text[] = {
    "######                                          #######\n"
    "#     #     #    #    #    ##    #####    #   #    #     #####   ######  ######\n"
    "#     #     #    ##   #   #  #   #    #    # #     #     #    #  #       #\n"
    "######      #    # #  #  #    #  #    #     #      #     #    #  #####   #####\n"
    "#     #     #    #  # #  ######  #####      #      #     #####   #       #\n"
    "#     #     #    #   ##  #    #  #   #      #      #     #   #   #       #\n"
    "######      #    #    #  #    #  #    #     #      #     #    #  ######  ######};\n"};
//function definations
void binarytree_banner()
{
    // binarytree_clear_menu("Binary Tree", 0);
    puts(*binary_ban_text);
}
