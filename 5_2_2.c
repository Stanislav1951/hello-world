#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#define PI 3.14159265358979323846

int main() {
	int r;
    scanf("%d", &r);
    r = r % 2;
    r = r * (-2);
    r = r + 1;
    printf("%d\n", r);
  return 0;
}
