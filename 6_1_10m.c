#include <stdio.h> 
int main(void){

  int m, d, o, x;
  scanf("%d %d", &m, &d); 
  switch (m) { 
  	case 1: o = d; break;
  	case 2: o = 31 + d; break;
  	case 3: o = 31 + 28 + d; break;
  	case 4: o = 31 + 28 + 31 + d; break;
  	case 5: o = 31 + 28 + 31 + 30 + d; break;
  	case 6: o = 31 + 28 + 31 + 30 + 31 + d; break;
  	case 7: o = 31 + 28 + 31 + 30 + 31 + 30 + d; break;
  	case 8: o = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d; break;
  	case 9: o = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d; break;
  	case 10:o = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d; break;
  	case 11:o = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d; break;
  	case 12:o = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d; break;
	default: printf("ERROR!\n"); return 0;
  }	

  printf("%d\n", o);
  return 0;
}
