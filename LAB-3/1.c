#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int naive(int n)
{
    int i;
    if(n<=1) return 0;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int recur(int n,int i)
{
    if(n==0 || n==1) return 0;
    if (n==i) return 1;
    if(n%i==0){
        return 0;
    }
    i++;
    return recur(n,i);
}
int root(int n)
{
    int i;
    if(n<=1) return 0;
    for(i=2;i<sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,i,j;
    clock_t start,end;
    double algo1,algo2,algo3;
    srand(time(NULL));
    printf("\n Enter n value : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=rand()%n;
    }
    start=clock();
    for(i=0;i<n;i++){
        j=naive(a[i]);
    }
    end=clock();
    algo1=((double)(end-start))/((double)CLOCKS_PER_SEC);
    printf("\n Naive Algo time take: %fs",algo1);
    srand(time(NULL));
    start=clock();
    for(i=0;i<n;i++){
        j=recur(a[i],2);
    }
    end=clock();
    algo2=((double)(end-start))/((double)CLOCKS_PER_SEC);
    printf("\n Recurssion Algo time take: %fs",algo2);
    srand(time(NULL));
    start=clock();
    for(i=0;i<n;i++){
        j=root(a[i]);
    }
    end=clock();
    algo3=((double)(end-start))/((double)CLOCKS_PER_SEC);
    printf("\n Square Root Algo time take: %fs",algo3);
}