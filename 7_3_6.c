#include <stdio.h>
/*
������������ ������������������ 
������������������ ������ ������������, ���� ������ � ��������� ���� ������ �����������.
�������� ���������, ����������� �������� �� ������������������ ������������.

������� ������:
������������������ ����� �����. ������� ��������� ������������������ - ����� -9999.
� ������������������ ������ ���� ���� �� ��� �����, ����� ����� -9999.

�������� ������: 
YES -- ���� ������������������ �������� ������������, NO � ��������� ������.
*/
int main (){
	int m, p;
	scanf("%d", &m); p = m;
	while (m!=-9999){
		scanf ("%d", &m);
		if (m <= p && m != -9999) {p = 0; break;}
		else p = m;
		}
	if (p) printf("YES\n"); else  printf("NO\n");
	return 0;
}
