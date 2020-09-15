#include <stdio.h>

main()
{
    int c, nstr, ntab, nspace;

    nstr = 0;
    ntab = 0;
    nspace = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c == '\n') 
        {
            nstr++;
        }
        else if (c == '\t') 
        {
            ntab++;
        }
        else if (c == ' ')
        {
            nspace++;
        }
    }
    printf("tab - %d\nspace - %d\nnewstr - %d", ntab, nspace, nstr);
    return 0;
}