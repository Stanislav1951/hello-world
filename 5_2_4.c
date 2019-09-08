#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#define PI 3.14159265358979323846

int main() {
	int x1, x2, x3, x4, x5;
    //scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    x1 = 2; x2 = 1; x3 = 5; x4 = -20; x5 = 0;
    x1 = 1 + (abs(x1 % 2)) * (-2);
    x2 = 1 + (abs(x2 % 2)) * (-2);
    x3 = 1 + (abs(x3 % 2)) * (-2);
    x4 = 1 + (abs(x4 % 2)) * (-2);
    x5 = 1 + (abs(x5 % 2)) * (-2);
    printf("%d\n", -(x1+x2+x3+x4+x5));
  return 0;
}
