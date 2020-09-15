/* print Celsius-fahrenheit- table for c = 0, 20, ..., 300  */
main()
{
    /* code */
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf(" Title\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32;
        printf("%4.0f %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
