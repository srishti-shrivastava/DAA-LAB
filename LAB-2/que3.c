#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n=1000000;
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=i+1;
	}
	int c1=a[0];
	int c2=a[n-1];
	clock_t start,end;
	double total_cputime;

	///FOR BEST CASE
	start=clock();
	for(int i=0; i<n; i++){
		if(a[i]==c1){
			end=clock();
			printf("Start Time = %ld\n",start);
			printf("End Time = %ld\n",end);
			total_cputime=(double)(end-start);
			printf("Total CPU Time = %f\n",total_cputime);
			total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
			printf("Total CPU Time in Sec. = %f\n",total_cputime);
		}
	}
	printf("\n");

	///FOR WORST CASE
	start=clock();
	for(int i=0; i<n; i++){
		if(a[i]==c2){
			end=clock();
			printf("Start Time = %ld\n",start);
			printf("End Time = %ld\n",end);
			total_cputime=(double)(end-start);
			printf("Total CPU Time = %f\n",total_cputime);
			total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
			printf("Total CPU Time in Sec. = %f\n",total_cputime);
		}
	}
	printf("\n");

	///FOR AVERAGE CASE
	int c3=rand()%n;
	start=clock();
	for(int i=0; i<n; i++){
		if(a[i]==c3){
			end=clock();
			printf("Start Time = %ld\n",start);
			printf("End Time = %ld\n",end);
			total_cputime=(double)(end-start);
			printf("Total CPU Time = %f\n",total_cputime);
			total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
			printf("Total CPU Time in Sec. = %f\n",total_cputime);
		}
	}
	printf("\n");
}