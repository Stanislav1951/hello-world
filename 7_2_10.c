#include <stdio.h>
#include <math.h>

int main(){
	int N, k=1, i = k;
	scanf("%d", &N);
	while (i){
		i= pow(2, k);
		if (i <= N) printf("%d ", k);
		else i = 0;
		k++;
			}
	return 0;
}
