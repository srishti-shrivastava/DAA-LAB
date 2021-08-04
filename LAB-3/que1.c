#include <stdio.h>
#include <time.h>
#include <math.h>


#define sf(x)              scanf("%d", &x)
#define pf                 printf
#define pfs(x)             printf("%d ", x)
#define pfn(x)             printf("%d\n", x)
#define pfc(x)             printf("%d, ", x)
#define f(i,x,y)           for(int i = x; i < y; i++)
#define fi(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define rf(i,x,y)          for(int i = x; i >= y; i--)


void c_() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}
int checkPrimeSimple(int n) {

	f(i, 2, n) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;

}
int checkPrimeSqRoot(int n) {

	int sq = sqrt(n);

	f(i, 2, sq + 1) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;

}
int main() {

	c_();

	time_t start, end;
	int n;
	sf(n);


	start = clock();
	pfn(checkPrimeSimple(n));
	end = clock();
	double t = end - start;
	printf("Time taken for simple algo: %f\n", (t / CLOCKS_PER_SEC));


	start = clock();
	pfn(checkPrimeSqRoot(n));
	end = clock();
	t = end - start;
	printf("Time taken for sq root algo: %f\n", (t / CLOCKS_PER_SEC));
    return 0;
}