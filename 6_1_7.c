#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  char c;
  int a, b;
  double res = 0.0;
  scanf("%d %d %c", &a, &b, &c);
  switch (c) {
    case '+' : res = a + b; break;
    case '-' : res = a - b; break;
    case '*' : res = a * b; break;
    case '/' : switch (b) {
    	case 0: printf("ERROR!\n"); return 0;
		default: res = a / (double)b; break;
	} break;
    default  : printf("ERROR!"); return 0;
  }
  printf("%.2lf\n", res);
  return 0;
}
