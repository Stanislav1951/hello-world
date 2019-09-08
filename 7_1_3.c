#include <stdio.h>

int main(void) {
	int n, k, i;
	scanf("%d %d", &n, &k);
	for (i = n; i<=k; i++)
		if (i > 0) printf("%d ", i);
	printf("\n");
	return 0;
}
