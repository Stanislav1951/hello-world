#include <stdio.h>
/*�������� ���������, ������� ������� �� ����� ����� �� 1 �� 100.
��� ���� ������ �����, ������� ����, ��������� ������ �������� ����� �Fizz�,
� ������ �����, ������� ���� � ����� �Buzz�.
���� ����� ������ � 3, � 5, �� ��������� ������ �������� ����� �FizzBuzz�
*/
int main (){
	int c3, c5;
	for (int i = 1; i < 101; i++){
		c3 = i % 3; c5 = i % 5;
		if (c3 && c5) printf ("%d ", i);
		if (!c3 && !c5) printf("FizzBuzz");
			else if (!c3) printf ("Fizz ");
				else if (!c5) printf ("Buzz ");
	}
	return 0;
}
