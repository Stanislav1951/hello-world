#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
#define PI 3.14159265358979323846

int main() {
  int w, ri, ro;;
  double s;
  //scanf("%lf %lf", &ri, &ro);
  ri = 122200;
  ro = 136800;
  w = ro - ri;
  s = ((PI * ((double)ro * ro)) - (PI * ((double)ri * ri))) * 100;
  printf("%d %0.2lf\n", w, s);
  return 0;
}
