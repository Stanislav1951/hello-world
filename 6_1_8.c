#include <stdio.h> 
int main(void){

  int a, h, w;
  char c;
  double otv;
  scanf("%c %d %d %d", &c, &a, &h, &w); 
  switch (c) { 
  	case 'm': otv = 10*w + 6.25*h - 5*a + 5; break;
  	case 'f': otv = 10*w + 6.25*h - 5*a - 161; break;
  	default: printf("ERROR!\n"); return 0;
  }	
  
  printf("|  BMR  |\n");
  printf("|%7.2f|\n",otv);
  return 0;
}
