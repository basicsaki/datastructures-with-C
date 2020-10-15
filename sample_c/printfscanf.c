#include <stdio.h>

void main()
{
    int val;
    printf("Welcome \n\n");

    while (1 == 1)
    {
        printf("Enter the number of times \n\n");

        scanf("%d", &val);
        // scanf(val);
        for (int i = 1; i <= val; i++)
        {
            printf("This is a prog \n \n");
        }
    }
}