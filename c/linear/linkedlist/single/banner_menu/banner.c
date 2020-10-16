#include "bm.h"

char *ban_text[] = {
    " #####\n"
    "#     #     #    #    #   ####   #        #   #\n"
    "#           #    ##   #  #    #  #         # #\n"
    " #####      #    # #  #  #       #          #\n"
    "      #     #    #  # #  #  ###  #          #\n"
    "#     #     #    #   ##  #    #  #          #\n"
    " #####      #    #    #   ####   ######     #\n"};

//function definations
void single_banner()
{
    puts(*ban_text);
}
