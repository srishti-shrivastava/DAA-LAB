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
    clock_t start,end; double total_cputime;
    start=clock();
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
     printf("<-----BEST CASE---->\n");
    int arr[n];
    for(int i=0;i<n;++i)
        arr[i]=i;
    bubbleSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);
   printf("<-----AVG CASE---->\n");
    start=clock();
   for(int i=0;i<n;++i)
        arr[i]=rand()%5000;
    bubbleSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);

    printf("<-----Worst CASE---->\n");
    start=clock();
   for(int i=0;i<n;++i)
        arr[i]=n-i;
    bubbleSort(arr,n);
     end=clock();
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("total cpu time in sec = %f\n",total_cputime);
    return 0;
}