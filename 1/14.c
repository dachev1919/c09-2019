main()
{
    int i;

    for (i = 1; i < 13; ++i)
        printf("%d| %d    %d\n--\n", i, power(2, i), power(3, i));
}
power(x, n) /* raise x n-th power; n > 0  */ 
int x, n;
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
    p = p * x;
    return (p);
}