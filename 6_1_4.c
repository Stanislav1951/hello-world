#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int k;  
  scanf("%d",&k);

  switch (k) {
    case 1 : printf("�����\n"); break;
    case 2 : printf("�������������������\n"); break;
    case 3 : printf("�����������������\n"); break;
    case 4 : printf("������\n"); break;
    case 5 : printf("�������\n"); break;
    default  : break;
  }

  return 0;
}
