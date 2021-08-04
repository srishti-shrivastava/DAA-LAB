#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSortAsc(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void insertionSortDesc(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {

        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {

            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    clock_t start, end;
    double total_cputime;
    int n;
    printf("enter the size of an array\n");
    scanf("%d", &n);
    int arr[n];

    printArray(arr, n);

    insertionSortAsc(arr, n);

    printArray(arr, n);

    int ch = 1;

    while (ch)
    {
        printf("enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            break;
        case 1:
            for (int i = 0; i < n; i++)
            {
                arr[i] = 1 + rand() % 100;
            }
            printf("value inserted\n");
            break;
        case 2:
              printArray(arr, n);

        case 3:
            insertionSortAsc(arr, n);
            printf("value inserted\n");
            break;
        case 4:
            insertionSortDesc(arr, n);
            printf("value inserted\n");
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                arr[i] = 1 + rand() % 100;
            }
            start = clock();
            insertionSortAsc(arr, n);
            printArray(arr, n);
            end = clock();
            total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\ntotal_cputime in second =%f", total_cputime);
            break;

        default:
        printf("enter the wrong value\n");
        }
     
    }
}