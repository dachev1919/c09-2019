#include <stdio.h>

#define IN 1  /* внутри слова */
#define OUT 0 /* снаружи слова */

#define MAXWLEN 100 /* максимальная длина слова */

/* выводит гистограмму длин слов во входном потоке; */
main()
{
    int wlen, wlengths[MAXWLEN];
    int maxlen, wlstatus[MAXWLEN];
    int c, state, i;

    for (i = 0; i < MAXWLEN; ++i)
        wlengths[i] = wlstatus[i] = 0;

    state = OUT;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;
                ++wlengths[wlen - 1];
            }
        }
        else if (state == OUT)
        {
            state = IN;
            wlen = 1;
        }
        else
            ++wlen;

    maxlen = wlengths[0];
    for (i = 1; i < MAXWLEN; ++i)
        if (maxlen < wlengths[i])
            maxlen = wlengths[i];

    for (i = 0; i < MAXWLEN; ++i)
        if (wlengths[i] > 0)
            printf("|%3d", i + 1);
    putchar('|');
    putchar('\n');

    while (maxlen > 0)
    {
        for (i = 0; i < MAXWLEN; ++i)
            if (wlstatus[i] < wlengths[i])
            {
                printf("%4c", '.');
                ++wlstatus[i];
            }
            else if (wlengths[i] > 0)
                printf("%4c", ' ');
        --maxlen;
        putchar('\n');
    }
    putchar('\n');

    for (i = 0; i < MAXWLEN; ++i)
        if ((wlen = wlengths[i]) > 0)
            printf(" %d,%d", i + 1, wlen);
    putchar('\n');
}