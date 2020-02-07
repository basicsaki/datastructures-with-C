#include "bm.h"

char *dynamic_ban_text[] = {
    "######\n"
    "#     #   #   #  #    #    ##    #    #     #     ####\n"
    "#     #    # #   ##   #   #  #   ##  ##     #    #    #\n"
    "#     #     #    # #  #  #    #  # ## #     #    #\n"
    "#     #     #    #  # #  ######  #    #     #    #\n"
    "#     #     #    #   ##  #    #  #    #     #    #    #\n"
    "######      #    #    #  #    #  #    #     #     ####\n"};

//function definations
void dynamic_banner()
{
    puts(*dynamic_ban_text);
}
