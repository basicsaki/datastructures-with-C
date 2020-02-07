#include "bm.h"
#include "string.h"

char *trie_ban_text[] = {
    "#######\n"
    "   #     #####      #    ######\n"
    "   #     #    #     #    #\n"
    "   #     #    #     #    #####\n"
    "   #     #####      #    #\n"
    "   #     #   #      #    #\n"
    "   #     #    #     #    ######\n"}; //function definations
void trie_banner()
{
    // trie_clear_menu("Tree", 0);
    puts(*trie_ban_text);
}
