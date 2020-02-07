#include "bm.h"

char *backtracking_ban_text[] = {
    "######\n"
    "#     #    ##     ####   #    #   #####  #####     ##     ####   #    #\n"
    "#     #   #  #   #    #  #   #      #    #    #   #  #   #    #  #   #\n"
    "######   #    #  #       ####       #    #    #  #    #  #       ####\n"
    "#     #  ######  #       #  #       #    #####   ######  #       #  #\n"
    "#     #  #    #  #    #  #   #      #    #   #   #    #  #    #  #   #\n"
    "######   #    #   ####   #    #     #    #    #  #    #   ####   #    #\n"};

//function definations
void backtracking_banner()
{
    puts(*backtracking_ban_text);
}
