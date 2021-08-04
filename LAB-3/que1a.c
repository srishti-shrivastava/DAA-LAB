#include <stdio.h>
#include <time.h>
int main()
{
    int n, i, flag = 0;
    clock_t start, end;
    double total_cputime;
    start = clock();
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {

        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}