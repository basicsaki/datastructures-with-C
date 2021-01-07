#include "bm.h"

char *algorithm_ban_text[] = {
    "   #\n"
    "  # #    #        ####    ####   #####      #     #####  #    #  #    #   ####\n"
    " #   #   #       #    #  #    #  #    #     #       #    #    #  ##  ##  #\n"
    "#     #  #       #       #    #  #    #     #       #    ######  # ## #   ####\n"
    "#######  #       #  ###  #    #  #####      #       #    #    #  #    #       #\n"
    "#     #  #       #    #  #    #  #   #      #       #    #    #  #    #  #    #\n"
    "#     #  ######   ####    ####   #    #     #       #    #    #  #    #   ####\n"};

//function definations
void algorithm_banner()
{
    puts(*algorithm_ban_text);
}
