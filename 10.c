#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != '.')
    {
        if (c == ' ') 
        {
            c = getchar();
            while (c == ' ')
            {
                c = getchar();
            }
            printf(" ");
            putchar(c);
            c = getchar();
        }
        if (c != ' ')
        {
            putchar(c);
            c = getchar();
        }
    }
    return 0;
}