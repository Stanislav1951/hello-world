#include <stdio.h>

int main(){
	int N, k = 1;
	scanf("%d", &N);
	while (N){
		N = N / 10;
		if (N) k++;
	}
	printf("%d\n", k);
	return 0;
}
