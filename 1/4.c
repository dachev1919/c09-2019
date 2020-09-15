#define lower 0   /* lower limit OF table */
#define upper 300 /* upper limit */
#define step 20   /* step size */
main() /* fahrenheit-celsius table  */
{
    int fahr;
    for(fahr = lower; fahr <= upper; fahr = fahr + step)
    printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}