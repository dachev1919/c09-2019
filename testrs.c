#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *str[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        str[i] = rand() % 100;
    }

    /* освобождение памяти */
    for (i = 0; i < 100; i++)
        free(str[i]);
    return 0;
}
