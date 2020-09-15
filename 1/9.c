#include <stdio.h>

main()
{
    int tab, space, newstr, c;
    tab = 0;
    space = 0;
    newstr = 0;
    while ((c = getchar()) != EOF)
    {
        if(c=='\t')
            ++tab;
        else if(c==' ')
            ++space;
        else if(c=='\n')
            ++newstr;
    }
    printf("tab - %d\nspace - %d\nnewstr - %d", tab, space, newstr);
}