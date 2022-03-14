#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;
    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("??????%d??1???%d??2???%d??5????%d?\n", one, two, five, x);
                    exit = 1;
                    goto out;
                }
            }
        }
    }
out:
    return 0;
}
