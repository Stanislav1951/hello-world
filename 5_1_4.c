#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define PI 3.14159265358979323846

int main() {
  int s, h, m;
  //scanf("%d", &s);
  s = 34961;
  h = s / 3600;
  m = (s / 60) % 60;
  printf("%d %d\n", h, m);
  return 0;
}
