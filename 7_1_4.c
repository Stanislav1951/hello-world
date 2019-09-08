#include <stdio.h>

int main(void) {
	int n, k, i, c = 0;
	scanf("%d %d", &n, &k);
	for (i = n; i<=k; i++)
		if (i > 0) {printf("%d ", i); c++;}
	printf("\n%d\n", c);
	return 0;
}
