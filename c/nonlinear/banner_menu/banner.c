#include "bm.h"

char *nonlinear_ban_text[] = {
    "#     #                         #\n"
    "##    #   ####   #    #         #           #    #    #  ######    ##    #####\n"
    "# #   #  #    #  ##   #         #           #    ##   #  #        #  #   #    #\n"
    "#  #  #  #    #  # #  #  #####  #           #    # #  #  #####   #    #  #    #\n"
    "#   # #  #    #  #  # #         #           #    #  # #  #       ######  #####\n"
    "#    ##  #    #  #   ##         #           #    #   ##  #       #    #  #   #\n"
    "#     #   ####   #    #         #######     #    #    #  ######  #    #  #    #\n"};
//function definations
void nonlinear_banner()
{
    // nonlinear_clear_menu("", 0);
    puts(*nonlinear_ban_text);
}
