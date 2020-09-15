#include <stdio.h>

main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 10;
    fahr = lower;
    printf("FAHR | CELSIUS\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("_____________\n");
        printf("|%.0f   | %.1f|\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("______________\n");
    return 0;
}