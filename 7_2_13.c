#include <stdio.h>

// Ёкспонента с заданной точностью
// ¬ычислить число e

int main(){
	double e, E = 1.0, k = 1.0;
	int f = 1;
	scanf("%lf", &e);
	while ((1 / k) >= e){
		k = k * f;
		f++;
		E = E + (1/k);
	}
	printf("%.8lf \n", E);
	return 0;
}
