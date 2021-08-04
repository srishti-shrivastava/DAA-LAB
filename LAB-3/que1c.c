#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 

int isPrime(int n, int i)
{
    
    
    if (n <= 2)
        return (n == 2) ? 1: 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
 
    return isPrime(n, i + 1);
}
 

int main()
{
    int n ;
    clock_t start, end;
    double total_cputime;
    start = clock();
    printf("Enter the number n\n");
    scanf("%d",&n);
    if (isPrime(n,2))
        printf("Yes %d is a prime number\n",n);
    else
        printf("Not a prime number\n");
 
    end = clock();
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}