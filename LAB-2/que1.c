#include<stdio.h>

void swap(int *,int *,int *);
int main()
{

    int n1,n2,n3;
	printf("\n\n Function : swap two numbers using function :\n");
	printf("------------------------------------------------\n");	   
    printf("Input 1st number : ");
    scanf("%d",&n1);
    printf("Input 2nd number : ");
    scanf("%d",&n2);
    printf("Input 3rd number : ");
    scanf("%d",&n3);	

    printf("Before swapping: n1 = %d, n2 = %d , n3 = %d",n1,n2,n3);
    swap(&n1,&n2,&n3);

    printf("\nAfter swapping: n1 = %d, n2 = %d , n3= %d \n\n",n1,n2,n3);
    return 0;
}

void swap(int *p,int *q,int *r)
{
	

    int tmp;
    tmp = *p; 
    *p=*q;    
    *q=*r;
    *r=tmp;   
}
