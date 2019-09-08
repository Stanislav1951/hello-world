#include <stdio.h>

int main(void) {
	int n, k, i, c = 0;
	scanf("%d %d", &n, &k);
	for (i = k; i>=n; i--)
		printf("%d ", i);
	//printf("\n%d\n", c);
	return 0;
}
