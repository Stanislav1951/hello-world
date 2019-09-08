#include <stdio.h>

int main() {
	int k, r8, r4, r2, r1;
    scanf("%d", &k);
    r8 = k / 1000;
    r4 = (k - r8*1000) / 100;
    r2 = (k - r8*1000 - r4*100) / 10;
    r1 = k - r8*1000 - r4*100 - r2*10;
    k = r1+r2*2+r4*4+r8*8;
    printf("%d\n", k);
  return 0;
}
