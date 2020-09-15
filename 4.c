#define lower 0
#define upper 300
#define step 10

main() 
{
    int fahr;
    for (fahr = lower; fahr <= upper; fahr += 10) {
        printf("%4d %.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}