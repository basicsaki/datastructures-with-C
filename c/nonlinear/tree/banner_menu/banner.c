#include "bm.h"

char *tree_ban_text[] = {
    "#######\n"
    "   #     #####   ######  ######\n"
    "   #     #    #  #       #\n"
    "   #     #    #  #####   #####\n"
    "   #     #####   #       #\n"
    "   #     #   #   #       #\n"
    "   #     #    #  ######  ######\n"};
//function definations
void tree_banner()
{
    // tree_clear_menu("Tree", 0);
    puts(*tree_ban_text);
}
