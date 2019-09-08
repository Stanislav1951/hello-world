#include <stdio.h>

int main(void) {
	int n, i, c = 0;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
		if (!(n%i)) {printf("%d ", i); c++;}
	printf("\n%d\n", c);
	return 0;
}
