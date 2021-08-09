#include <stdio.h>
#include <limits.h>
#include<time.h>
 

int max(int x, int y) {
    return (x > y) ? x : y;
}
 
int getMaxDiff(int arr[], int n)
{
    int diff = INT_MIN;
    if (n == 0) {
        return diff;
    }
 
    int max_so_far = arr[n-1];
 
    
    for (int i = n - 2; i >= 0; i--)
    {
       
        if (arr[i] >= max_so_far) {
            max_so_far = arr[i];
        }
        
        else {
            diff = max (diff, max_so_far - arr[i]);
        }
    }
 
   
    return diff;
}

int main()
{
    clock_t start, end;
    double total_cputime;
    start = clock();
    int arr[] = {10, 3, 6, 8, 9, 4, 3  };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int result = getMaxDiff(arr, n);
    if (result != INT_MIN) {
        printf("The maximum difference is %d", result);
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