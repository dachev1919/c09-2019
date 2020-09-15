#include <stdio.h>

main()
{
    int c;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        if(c == ' ')
            while(((c = getchar()) == ' ') && (c != EOF));
        else
            c = getchar();
    }
    return 0;
}