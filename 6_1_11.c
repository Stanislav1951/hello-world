#include <stdio.h> 
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int k;
  scanf("%d", &k); 
  printf("��� %d ", k);
  switch (k) { 
  	case 11:
  	case 12:
  	case 13:
  	case 14: printf("���");  return 0;
	}
  k = k % 10;
  switch (k) {
  	case 1: printf("���"); break;
  	case 2: 
	case 3:
	case 4:	printf("����"); break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:	printf("���"); break;
  }
  
  return 0;
}
