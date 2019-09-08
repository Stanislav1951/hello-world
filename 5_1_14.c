#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#define PI 3.14159265358979323846

int main() {
    double x, ex, e;
    scanf("%lf", &x);
    ex = 1. + x + pow(x, 2) / 2 + pow(x, 3) / (2 * 3) + pow(x, 4) / (2 * 3 * 4) + pow(x, 5) / (2 * 3 * 4 * 5);
    e = exp(x);
    printf("%0.6f\n%0.6f\n", e, ex);
  return 0;
}
