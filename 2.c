#include <stdio.h>

main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 10;
    celsius = lower;
    printf("CELSIUS | FAHR\n");
    while ( celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("_____________\n");
        printf("|%.1f   | %.1f|\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}