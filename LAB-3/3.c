#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[1000000];
clock_t start,end;
double tot;
void func1(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%n;
    }
}
void func2(int n)
{
    int i;
    printf("\n Current Array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
double func3(int n,int o)
{
    srand(time(NULL));
    start=clock();
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    end=clock();
    tot=((double)end-start)/((double)CLOCKS_PER_SEC);
    if(o==0) return 0;
    else return tot;
}
double func4(int n, int o)
{
    srand(time(NULL));
    start=clock();
    int i,j,t;
    for(i=0;i<n;i++)    
    { 
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    end=clock();
    tot=((double)(end-start))/((double)(CLOCKS_PER_SEC));
    if(o==0) return 0;
    else return tot;
}
void func5()
{
    int i,n;
    double ti;
    printf("\nValue of n\t\tRandom Data\t\tAscending\t\tDescending");
    for(i=5000;i<=50000;i+=5000)
    {   
        printf("\n%d",i);
        func1(i);
        ti=func3(i,1);
        printf("\t\t%f",ti);
        ti=func3(i,1);
        printf("\t\t%f",ti);
        func4(i,0);
        ti=func4(i,1);
        printf("\t\t%f",ti);
    }
}
int main()
{
    int n,i;
    double ti;
    printf("\n Enter n :");
    scanf("%d",&n);
    while(1)
    {
       printf("\n0. To Exit");
       printf("\n1. n Random numbers -> Array");
       printf("\n2. Display the Array");
       printf("\n3. Sort the Array in Ascending Order by using Insertion Sort Algorithm");
       printf("\n4. Sort the Array in Descending Order by using any sorting Algorithm");
       printf("\n5. Time Complexity to sort ascending of random data");
       printf("\n6. Time Complexity to sort ascending of data already sorted in ascending order");
       printf("\n7. Time Complexity to sort ascending of data already sorted in descending order");
       printf("\n8. Time Complexity to sort ascending of data for all Cases (Data Ascending, Data in descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000");
       printf("\n Choose");
       scanf("%d",&i);
       switch(i)
       {
            case 0: exit(0);
                    break;
            case 1: func1(n);
                    break;
            case 2: func2(n);
                    break;
            case 3: func3(n,0);
                    break;
            case 4: func4(n,0);
                    break;
            case 5: ti=func3(n,1);
                    printf("\n Time Taken =%f",ti);
                    break;
            case 6: func3(n,0);
                    func2(n);
                    ti=func3(n,1);
                    printf("\n Time Taken for sorted=%f",ti);
                    break;
            case 7: func4(n,0);
                    func2(n);
                    ti=func3(n,1);
                    printf("\n Time taken for sorted=%f",ti);
                    break;
            case 8: func5();
                    break;
            default: printf("\n Wrong Entry");
       }
       
    }
    return 0;
}