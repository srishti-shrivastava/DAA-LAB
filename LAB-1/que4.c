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

    int pro = 1;

    for (int i = 0; i < n; i++)
    {
        pro = pro * arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = pro / arr[i];
        printf("%d ", arr[i]);
    }

    return (0);
}