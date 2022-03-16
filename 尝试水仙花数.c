#include <stdio.h>
#include <math.h>
int main()
{
    int x = 3.0; 
    // 100~999
    double i=0, j=0, k=0;
    int sum = 0;
    int first = pow(10.0, x - 1);
    int y = first;
    // printf("first=%d", first); first=100
    for (y; y < first * 10; y++)
    {
        k = y % (first/10);
        j = (y / 10) % (first / 10);
        i = y / first;
        sum = pow(i, x) + pow(j, x) + pow(k, x);
        if (y == sum)
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
