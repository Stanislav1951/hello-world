#include <stdio.h>

int main(void) {
	int a, b, c, x;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b) {x = b; b = a; a = x;
		if (b >= c) {x = c; c = b; b = x;}
		}
		else if (b >= c) {x = c; c = b; b = x;}
	if (a >= b) {x = b; b = a; a = x;}	
	printf("%d %d %d", a, b, c);
	return 0;
}

	/*
	if ((a < 2 || a > 40) || (b < 2 || b > 40) || (c < 2 || c > 40)){
		printf("ERROR!\n");
		return 1;
	}
	*/
