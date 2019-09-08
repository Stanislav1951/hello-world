#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int q = 1, i=1;
	while (q <= N)
	{
		printf("%d ", q);
		i++;
		q = i * i;
	}
	return 0;
}
