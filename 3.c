main() 
{
    int celsium;
    for(celsium = 300; celsium >= -300; celsium = celsium - 10) {
        printf("%4d %.1f\n", celsium, (celsium * 1.8) + 32);
    }
    return 0;
}