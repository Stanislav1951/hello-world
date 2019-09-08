#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
#define PI 3.14159265358979323846

int main() {
  double r, h, v1, v2;
  scanf("%lf %lf", &r, &h);
  v1 = h * PI * r * r;
  v2 = v1 / 3;
  printf("%0.2lf %0.2lf\n", v1, v2);
  return 0;
}
