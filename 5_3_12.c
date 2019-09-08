#include <stdio.h>
//#include <math.h>

int main() {
	int x, x1, x2, x3, x4, kx;
	int des = 10, sdv = 7;
	//scanf("%d", &x);
	x = 2458;
	x1 = (x / 1000 + sdv) % des;
	x2 = (x%1000/ 100 + sdv) % des;
	x3 = (x%100 / 10 + sdv) % des;
	x4 = (x % 10 + sdv) % des;
	kx = x1 * 10 + x2 + x3 * 1000 + x4 * 100;
	printf("%d\n", kx);
  return 0;
}
