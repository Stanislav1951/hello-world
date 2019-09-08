#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  char c;
  int a, b;
  double res = 0.0;
  scanf("%c", &c);
  scanf("%d %d", &a, &b);

  switch (c) {
    case '+' : res = a + b; break;
    case '-' : res = a - b; break;
    case '*' : res = a * b; break;
    case '/' : res = a / (double)b; break;
    default  : printf("ERROR!\n"); return 0;
  }
  printf("%.2lf\n", res);
  return 0;
}
