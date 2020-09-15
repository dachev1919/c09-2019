#include <stdio.h>
#include <stdlib.h>
void test(int *arr, int *mainArr, int n, int s, int min)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == min)
            continue;
        else
        {
            mainArr[index] = arr[i];
            printf("%d|", mainArr[index]);
            index += 1;
        }    
    }
    
}
int main()
{
    int *arr, *mainArr;
    int n, min, i, s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand()%33;
        printf("%d|", arr[i]);
    }
    min = *arr;
    for (int i = 0; i < n; i++)if (*(arr+i)<min)min = *(arr + i);
    for (int i = 0; i < n; i++)if(*(arr+i)==min)s+=1;
    mainArr = (int*)malloc(n-s*sizeof(int));
    printf("\nResult: ");
    test(arr, mainArr, n, s, min);
    return 0;
}