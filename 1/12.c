#include <stdio.h>

main() {
    int c, i, b, nwhite, nother;
    int ndigit[10];

    b = 9;
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i, --b)
        ndigit[i] = b;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother;
            printf("digits =");
        for (i = 0; i < 10; ++i)
            printf(" %d", ndigit[i]);
            printf("\nwhite space = %d, other = %d\n", nwhite, nother);
    }
    
}