#include <stdio.h>
#include <math.h>

#define p0 1.29

int main() {
	int h;
	double p, z = 1.25e-4;
	scanf("%d", &h);
	//h = 800;
	p = p0 * exp(-h * z);
	printf("%0.2lf\n", p);
  return 0;
}
