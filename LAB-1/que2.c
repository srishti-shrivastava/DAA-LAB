#include<stdio.h>

int main()
{
    
    int size,i,j;
    

    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    int found = 0;
    printf("Enter the key value : ");
    scanf("%d", &key);

    for (i = 0; i < size; i++){
        for (j = i+1; j < size; j++){

             if ((arr[i]*arr[i]) + (arr[j]*arr[j])==key)
             {
                 printf("i=%d and j=%d",arr[i],arr[j]);
                 found=1;
                 break;
             }
        }
    }

    if(found==0){
        printf("Not found");
    }
    return 0;
}