#include <stdio.h>

int main()
{
    printf("Enter the number of values in array \n");
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            printf("k=%d ", arr[i]);    
            break;        
        }
    }
    return (0);
}