#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define PI 3.14159265358979323846

int main() {
  int N, k;
  double m;
  double mk = 3e-23;
  double kp = 0.05;
  double sc = 249.5;  
  scanf("%d", &N);
  k = N * (int)(sc / kp);
  m = (sc * (float)N) / mk;
  printf("%d %0.3e\n", k, m);
  return 0;
}
