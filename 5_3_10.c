#include <stdio.h>
//#include <math.h>

int main() {
	int k, n, x;
	scanf("%d %d %d", &n, &k, &x);
	printf("%d\n", (x + k) % n);
  return 0;
}
