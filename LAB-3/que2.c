#include<stdio.h>
#include<time.h>

long long gcd(long long m, long long n)
{
    if(n>m){
        long long temp = m;
        m=n;
        n=temp;
    }
    while (n>0){
        long long r= m%n;
        m=n;
        n=r;
    }
    return m;
}

double getTimeForExection(long long m, long long n){
    double start= clock();
    gcd(m,n);
    double end = clock()-start;
    return (end-start);
}

int main(){
    printf("Time for GCD (31415,14142) : %f\n", getTimeForExection( 31415, 14142));
    printf("Time for GCD (56,32566) : %f\n", getTimeForExection( 56, 32566));
    printf("Time for GCD (34218,56) : %f\n", getTimeForExection( 34218,56));
    printf("Time for GCD (12,15) : %f\n", getTimeForExection( 12, 15));
    printf("Time for GCD (31415,31415) : %f\n", getTimeForExection( 31415, 31415));
    printf("Time for GCD (12,12) : %f\n", getTimeForExection( 12, 12));
}