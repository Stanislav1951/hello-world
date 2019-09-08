#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int m = n, M = n;
	do
	{
		scanf("%d", &n);
		if (n < m && n) m = n;
		if (n > M && n) M = n;
	}
	while (n);
	printf("%d %d", M, m);
	return 0;
}
