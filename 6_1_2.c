#include <stdio.h>
#include <math.h>
#include <locale.h>

#define N0 75000000000.0

int main() {
	setlocale(LC_ALL, "");
	int k;
	double N, la, T = 5570.0;
	scanf("%d", &k);
	//k = 500;
	la = log(2) / T;
	N = (N0 * exp(-la * k)) / 1000000000.;
	printf("Ответ %0.2lf\n", N);
  return 0;
}
