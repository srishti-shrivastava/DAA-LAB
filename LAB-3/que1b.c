#include <stdio.h> 
#include<time.h>

int main() {
  int n, i, c = 0;
  clock_t start, end;
    double total_cputime;
    start = clock();
  printf("Enter any number n:");
  scanf("%d", &n);

    for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("n is a Prime number");
  }
  else {
  printf("n is not a Prime number");
  }
  end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);
    
}