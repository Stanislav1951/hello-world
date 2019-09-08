#include <stdio.h> 
//#include <locale.h>

int main(void) {
  //setlocale(LC_ALL, "");
  int a, b, c, k;
  scanf("%d %d %d", &a, &b, &c); 
  k = (a>0)+(b>0)+(c>0);
  printf("%d\n", k);
  return 0;
}
