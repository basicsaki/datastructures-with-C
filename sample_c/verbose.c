#include <stdio.h>
#include <string.h>

static int verboseflag;
int second_meth();

void print_usage()
{
    printf("\n USAGE: \n \t main | --verbose \n");
};

int main(int argc, char **argv)
{
    print_usage();
    printf("%d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
        printf("inside here");
        verboseflag = 1;

        if (argv[i] == "--verbose")
        {
            printf("inside here");
            verboseflag = 1;
        }
        /* code */
    }
    second_meth();

    return 123;
}

int second_meth()
{
    printf("%d", verboseflag);
}