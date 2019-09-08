#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define PI 3.14159265358979323846

int main() {
  int K, h, d, e;
  scanf("%d", &K);
  h = (K % 10) * 100;
  d = ((K / 10) % 10) * 10;
  e = K / 100;
  printf("%d\n", h+d+e);
  return 0;
}
