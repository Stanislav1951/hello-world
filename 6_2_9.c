#include <stdio.h> 
//#include <locale.h>

int main(void) {
  //setlocale(LC_ALL, "");
  double x, y;
  scanf("%lf %lf", &x, &y); 
  /*
  int z;
  z = (x>0)*14+(x<0)*23;
  switch (y>0){
  	case 1: z = z / 10; break;
  	case 0: z = z % 10; break;
  }
  */
  printf ("%d\n", 1 + (x*y<0) + 2*(y<0));
  return 0;
}
