#include "bm.h"

char *linear_ban_text[] = {
    "#                                                       ######   #####\n"
    "#           #    #    #  ######    ##    #####          #     # #     #\n"
    "#           #    ##   #  #        #  #   #    #         #     # #\n"
    "#           #    # #  #  #####   #    #  #    #         #     #  #####\n"
    "#           #    #  # #  #       ######  #####          #     #       #\n"
    "#           #    #   ##  #       #    #  #   #          #     # #     #\n"
    "#######     #    #    #  ######  #    #  #    # ####### ######   #####\n"

};
//function definations
void linear_banner()
{
    linear_clear_menu("Linear", 0);
    puts(*linear_ban_text);
}
