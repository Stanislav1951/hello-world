#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "");
	int a;
	scanf("%d", &a);
	if (a < 7) printf("����������\n");
	else if (a > 6 && a < 19) printf("��������\n");
	else if (a > 18 && a < 60) printf("�������\n");
	else printf("���������\n");
	/*
	if (a <= 6) printf("����������\n");
	if (a >= 7 && a <= 18) printf("��������\n");
	if (a >= 19 && a <= 59) printf("�������\n");
	if (a >= 60) printf("���������\n");
	*/
	return 0;
}
