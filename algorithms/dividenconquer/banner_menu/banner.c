#include "bm.h"

char *dnc_ban_text[] = {
    "######\n"
    "#     #     #    #    #     #    #####   ######\n"
    "#     #     #    #    #     #    #    #  #\n"
    "#     #     #    #    #     #    #    #  #####\n"
    "#     #     #    #    #     #    #    #  #\n"
    "#     #     #     #  #      #    #    #  #\n"
    "######      #      ##       #    #####   ######\n"
    "\n"
    " #####\n"
    "#     #   ####   #    #   ####   #    #  ######  #####\n"
    "#        #    #  ##   #  #    #  #    #  #       #    #\n"
    "#        #    #  # #  #  #    #  #    #  #####   #    #\n"
    "#        #    #  #  # #  #  # #  #    #  #       #####\n"
    "#     #  #    #  #   ##  #   #   #    #  #       #   #\n"
    " #####    ####   #    #   ### #   ####   ######  #    #\n"};

//function definations
void dnc_banner()
{
    puts(*dnc_ban_text);
}
