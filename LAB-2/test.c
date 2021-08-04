#include<stdio.h>
#include<time.h>
int main()
{
int a,b,c;
clock_t start,end;
double total_cputime;
start=clock();
printf("Enter 2 values:");
scanf("%d%d",&a,&b);
c=a+b;
printf("\naddition result=%d",c);
end=clock();
printf("\nstarting time=%ld",start);
printf("\nEnd time =%ld",end);

total_cputime=((double)(end-start));
printf("\ntotal_cputime =%f",total_cputime);

total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
printf("\ntotal_cputime in second =%f",total_cputime);



return 0;
}










