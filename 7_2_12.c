#include <stdio.h>
//#include <math.h>

int main(){
	int N;
	scanf("%d", &N);
	while (N){
		printf("%d ", N % 10);
		N = N / 10;
	}
	printf("\n");
	return 0;
}
