#include <stdio.h> 
//#include <locale.h>

int main(void) {
  //setlocale(LC_ALL, "");
  int a, b;
  scanf("%d %d", &a, &b); 
  if (a < b) printf("yes\n");
  else printf("no\n");
  return 0;
}
