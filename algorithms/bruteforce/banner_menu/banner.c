#include "bm.h"

char *bruteforce_ban_text[] = {
    "######\n"
    "#     #  #####   #    #   #####  ######  ######   ####   #####    ####   ######\n"
    "#     #  #    #  #    #     #    #       #       #    #  #    #  #    #  #\n"
    "######   #    #  #    #     #    #####   #####   #    #  #    #  #       #####\n"
    "#     #  #####   #    #     #    #       #       #    #  #####   #       #\n"
    "#     #  #   #   #    #     #    #       #       #    #  #   #   #    #  #\n"
    "######   #    #   ####      #    ######  #        ####   #    #   ####   ######\n"};

//function definations
void bruteforce_banner()
{
    puts(*bruteforce_ban_text);
}
