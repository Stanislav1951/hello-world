/* ������: ����� ����� ������� �����, �� ���� �����
an,���n?N. ��-����� �������� ������ ������ ��?(n).
 �������� ��������� � ����������� ������ �������:
 a(n) =(an/2an/2,���� n � ������
 a(n?1)/2a(n?1)/2a,���� n � �������
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int a, k, res = 1, tr;
  scanf("%d %d", &a, &k);
  tr = pow(a, k);
  if (k%2 == 0) res = a;
//���� ������� ������ ����
  do
    {
	if (!(k%2))// ���� ������� ������, ��
	{   
      k = k / 2;
	  res = res*res; // �������� ������� ��������� �� ����  
    }
	else//���� ������� ��������
	{ 
      res = res * a; // �� �������� �� �������� �����
	  k = k - 1;   // �� ������� �������� �������
    }
    printf("res:%d, k:%d\n", res, k);
	}
  while(k);
  printf("%d pow=%d\n", res, tr);

  return 0;
}
