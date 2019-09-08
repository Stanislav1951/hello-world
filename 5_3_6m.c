#include <stdio.h>
#include <math.h>

// 1th * k^0 + 2th * k^1 + 3th * k^2 + 4th * k^3;

int main() {
	int b, t1, t2, t3, t4;
    int k = 2;
	scanf("%d", &b);
    t1 = b % 10 * 1;
    t2 = b / 10 % 10 * k;
    t3 = b / 100 % 10 * pow(k, 2);
    t4 = b / 1000 % 10 * pow(k, 3);
    b = t1 + t2 + t3 + t4;
    printf("%d\n", b);
  return 0;
}
