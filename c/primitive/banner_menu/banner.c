#include "bm.h"

char *primitive_ban_text[] = {
    "#####\n"
    "#     #  #####      #    #    #     #     #####     #    #    #  ######\n"
    "#     #  #    #     #    ##  ##     #       #       #    #    #  #\n"
    "######   #    #     #    # ## #     #       #       #    #    #  #####\n"
    "#        #####      #    #    #     #       #       #    #    #  #\n"
    "#        #   #      #    #    #     #       #       #     #  #   #\n"
    "#        #    #     #    #    #     #       #       #      ##    ######\n"};
//function definations
void primitive_banner()
{
    // primitive_clear_menu("Primitive data types", 0);
    puts(*primitive_ban_text);
}
