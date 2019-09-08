#include <stdio.h>

int main(void) {
	int m;
	scanf("%d", &m);
	if (m > 500) m = 350 + (m-500)*2;
	else m = 350;
	printf("%d\n",m);
	return 0;
}
