#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define PI 3.14159265358979323846

int main() {
    printf("%0.5f\n", 1 + (1./1) + (1./2) + (1./(2*3)));
    printf("%0.5f\n", 1 + (1./1) + (1./2) + (1./(2*3)) + (1./(2*3*4)));
    printf("%0.5f\n", 1 + (1./1) + (1./2) + (1./(2*3)) + (1./(2*3*4)) + (1./(2*3*4*5)));
  return 0;
}
