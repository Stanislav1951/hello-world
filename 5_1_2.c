#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
  int x, s, s6, v;
  scanf("%d", &x);
  s = x * x;
  s6 = s * 6;
  v = pow (x, 3);
  printf("%d %d %d\n", s, s6, v);
  return 0;
}
