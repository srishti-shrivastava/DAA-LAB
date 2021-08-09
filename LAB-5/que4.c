#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
       clock_t start ,end;
    double taken;
    start=clock();
    int n=4;
    double arr[4][4]={{10.9,2.5,1.3,9.3},{3.8,9.2,2.2,11.8},{7.9,5.2,7.3,0.6},{3.4,13.1,1.2,6.3}};
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        arr[i][j]=floor(arr[i][j]);
    }
    
}
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        printf("%.6g ",arr[i][j]);
    }
    printf("\n");
}
    
    
    end=clock();
    taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Total time taken %f",taken);
}