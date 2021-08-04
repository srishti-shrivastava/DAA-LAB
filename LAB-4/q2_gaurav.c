#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[],int n)
{
     int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {
      min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    clock_t start,end; double total_cputime;
    start=clock();
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
     printf("<-----BEST CASE---->\n");
    int arr[n];
    for(int i=0;i<n;++i)
        arr[i]=i;
    selectionSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);
   printf("<-----AVG CASE---->\n");
    start=clock();
   for(int i=0;i<n;++i)
        arr[i]=rand()%5000;
    selectionSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);

    printf("<-----Worst CASE---->\n");
    start=clock();
   for(int i=0;i<n;++i)
        arr[i]=n-i;
    selectionSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);
    return 0;
}