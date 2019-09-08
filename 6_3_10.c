#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "");
	int a;
	scanf("%d", &a);
	if (a < 7) printf("дошкольник\n");
	else if (a > 6 && a < 19) printf("школьник\n");
	else if (a > 18 && a < 60) printf("рабочий\n");
	else printf("пенсионер\n");
	/*
	if (a <= 6) printf("дошкольник\n");
	if (a >= 7 && a <= 18) printf("школьник\n");
	if (a >= 19 && a <= 59) printf("рабочий\n");
	if (a >= 60) printf("пенсионер\n");
	*/
	return 0;
}
