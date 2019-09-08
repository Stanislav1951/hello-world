#include <stdio.h>

int main(void) {
	int d, m, md, a = 1;
	scanf("%d %d", &d, &m);
	switch (m) {
		case 4:
		case 6:
		case 9:
		case 11: md = 30; break;
		case 2: md = 29; break;
		default: md = 31; break;
	}
	if (m < 1 || m > 12 || d < 1 || d > md) a = 0;
	if (a) printf("correct\n");
	else printf("error\n");
	return 0;
}
