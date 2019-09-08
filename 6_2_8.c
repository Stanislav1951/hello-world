#include <stdio.h> 
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int x, y;
  scanf("%d %d", &x, &y); 
  printf ("%d\n", x == y);
  return 0;
}
