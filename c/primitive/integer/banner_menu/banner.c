#include "bm.h"

char *integer_ban_text[] = {
    "  ###\n"
    "   #     #    #   #####  ######   ####   ######  #####\n"
    "   #     ##   #     #    #       #    #  #       #    #\n"
    "   #     # #  #     #    #####   #       #####   #    #\n"
    "   #     #  # #     #    #       #  ###  #       #####\n"
    "   #     #   ##     #    #       #    #  #       #   #\n"
    "  ###    #    #     #    ######   ####   ######  #    #\n"};
//function definations
void integer_banner()
{
    integer_clear_menu("Integer", 0);
    puts(*integer_ban_text);
}
