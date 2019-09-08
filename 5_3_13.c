#include <stdio.h>
//#include <math.h>

int main() {
	int y, y1, y2, y3, y4, ky;
	int des = 10, sdv = 3;
	//scanf("%d", &y);
	//x = 2458;
	y = 2591;
	y1 = (y / 1000 + sdv) % des;
	y2 = (y%1000/ 100 + sdv) % des;
	y3 = (y%100 / 10 + sdv) % des;
	y4 = (y % 10 + sdv) % des;
	ky = y1 * 10 + y2 + y3 * 1000 + y4 * 100;
	printf("%d\n", ky);
  return 0;
}
