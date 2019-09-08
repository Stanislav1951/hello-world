#include <stdio.h>
#include <math.h>
//#include <locale.h>

int main(void) {
	//setlocale(LC_ALL, "");
	int b1, b2, b3, b4;
	scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
	if (b1 == 1 && b2 == 0 && b3 == 2 && b4 == 4) printf("open\n");
	else printf("close\n");
	return 0;
}
