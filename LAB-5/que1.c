#include <stdio.h>
#include<limits.h>
#include<time.h>


#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

#define MAX(a,b)   (a>b)?a:b
int maxSubArraySum(int a[], int n)
{
    int max_so_far = a[0];
    int curr_max = a[0];
    int i = 0;
    for (i = 1; i < n; i++)
    {
        curr_max = MAX(a[i], curr_max+a[i]);
        max_so_far = MAX(max_so_far, curr_max);
    }
    return max_so_far;
}
int main()
{
    int arr[] = { -2,  -3, 4, -1, -2, 1, 0, 5, -3};
    clock_t start, end;
    double total_cputime;
    start = clock();
    
    int arr_size = ARRAY_SIZE(arr);
    const int maxSum = maxSubArraySum(arr, arr_size);
    printf("\nMax sum = %d\n", maxSum);
    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}

