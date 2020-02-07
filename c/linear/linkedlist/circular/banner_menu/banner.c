#include "bm.h"

char *circular_ban_text[] = {
    " #####\n"
    "#     #     #    #####    ####   #    #  #         ##    #####\n"
    "#           #    #    #  #    #  #    #  #        #  #   #    #\n"
    "#           #    #    #  #       #    #  #       #    #  #    #\n"
    "#           #    #####   #       #    #  #       ######  #####\n"
    "#     #     #    #   #   #    #  #    #  #       #    #  #   #\n"
    " #####      #    #    #   ####    ####   ######  #    #  #    #\n"};
//function definations
void circular_banner()
{
    puts(*circular_ban_text);
}
