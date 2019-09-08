#include <stdio.h>
#include <math.h>
//#include <locale.h>

int main(void) {
  //setlocale(LC_ALL, "");
  int x1, y1, x2, y2, r1, r2;
  scanf("%d %d", &x1, &y1);
  scanf("%d %d", &x2, &y2);
  r1 = sqrt(x1*x1 + y1*y1);
  r2 = sqrt(x2*x2 + y2*y2);
  if (r1 > r2) printf("2\n");
  else printf("1\n");
  return 0;
}
