#include <stdio.h>

//#include <math.h>
//#include <locale.h>

int main(void) {
	//setlocale(LC_ALL, "");
	int b1, b2, b3, b4;
	int code = 248;
	scanf("%d %d %d", &b1, &b2, &b3);
	b4 = b1 != b2 && b2 != b3;
	b4 = b4 * ((b1 == 2 || b1 == 4 || b1 == 8) && (b2 == 2 || b2 == 4 || b2 == 8) &&(b3 == 2 || b3 == 4 || b3 == 8));
	if (b4) printf("open\n");
	else printf("close\n");
	printf("%d\n",b4);
	return 0;
}
