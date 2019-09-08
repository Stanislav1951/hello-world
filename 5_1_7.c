#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define PI 3.14159265358979323846

int main() {
  int M, N;
  double d;
  //scanf("%d %d", &M, &N);
  M = 1554; N = 155;
  d = (double)M / N;
  M = (int)d % 10;
  d = (d - M) * 10;
  N = (int)d % 10;
  printf("%d %d %0.3lf\n", M, N, d);
  return 0;
}
