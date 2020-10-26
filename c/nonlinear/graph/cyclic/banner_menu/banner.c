#include "bm.h"

char *cyclic_ban_text[] = {
    " #####\n"
    "#     #   #   #   ####   #          #     ####\n"
    "#          # #   #    #  #          #    #    #\n"
    "#           #    #       #          #    #\n"
    "#           #    #       #          #    #\n"
    "#     #     #    #    #  #          #    #    #\n"
    " #####      #     ####   ######     #     ####\n"};
//function definations
void cyclic_banner()
{
    cyclic_clear_menu("Cyclic Graph", 0);
    puts(*cyclic_ban_text);
}
