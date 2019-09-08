#include <stdio.h>

int main(void) {
	int n, i, c = 0;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
		if (!(n%i)) c++;
	if (c != 2) c = 0; else c = 1;
	printf("%d\n", c);
	return 0;
}
