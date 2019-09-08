#include <stdio.h>
//#include <math.h>

int main() {
	int n, k, x1, x2, x3, x4;
	n = 26;
	//scanf("%d %d %d %d %d", &k, &x1, &x2, &x3, &x4);
	k = 3; x1 = 12; x2 = 24; x3 = 12; x4 = 4;
	x1 = (x1 + k) % n;
	x2 = (x2 + k) % n;
	x3 = (x3 + k) % n;
	x4 = (x4 + k) % n;
	printf("%d %d %d %d\n", x1, x2, x3, x4);
  return 0;
}
