#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#define PI 3.14159265358979323846

int main() {
	int k;
    //scanf("%d", &k);
    k = 127;
	//x1 = 0; x2 = 2; x3 = 0; x4 = 3; x5 = 0;
    //x1 = x1*x1+x2*x2+x3*x3+x4*x4+x5*x5;
    printf("%d\n", (k % 10) * 100 + k / 10);
  return 0;
}
