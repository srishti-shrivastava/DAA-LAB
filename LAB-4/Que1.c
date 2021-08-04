#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int a[], int number) {
    int i, j, temp;
    for(i = 0; i < number - 1; i++) {
        for(j = 0; j < number - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    clock_t start, end;
    double total_cputime;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("\nFor Best Case :-\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    start = clock();
    bubbleSort(a, n);
    end = clock();
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("total_cputime in second = %f\n", total_cputime);
    printf("\nFor Worst Case :-\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }
    start = clock();
    bubbleSort(a, n);
    end = clock();
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("total_cputime in second = %f\n", total_cputime);
    printf("\nFor Average Case :-\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n;
    }
    start = clock();
    bubbleSort(a, n);
    end = clock();
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("total_cputime in second = %f\n", total_cputime);
    return 0;
}