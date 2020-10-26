#include "bm.h"

char *array_ban_text[] = {
    "#                                                       ######   #####\n"
    "#           #    #    #  ######    ##    #####          #     # #     #\n"
    "#           #    ##   #  #        #  #   #    #         #     # #\n"
    "#           #    # #  #  #####   #    #  #    #         #     #  #####\n"
    "#           #    #  # #  #       ######  #####          #     #       #\n"
    "#           #    #   ##  #       #    #  #   #          #     # #     #\n"
    "#######     #    #    #  ######  #    #  #    # ####### ######   #####\n"

};
//function definations
void array_banner()
{
    array_clear_menu("array", 0);
    puts(*array_ban_text);
}
