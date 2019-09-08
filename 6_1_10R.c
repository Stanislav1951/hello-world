#include <stdio.h> 
int main(void){

  int k, n, o;
  scanf("%d %d", &k, &n); 
  switch (k) { 
  	case 1: o = n; break;
  	case 2: o = (n%10)*(n/10); break;
  	case 3: o = (n%10)*(n/10%10)*(n/100); break;
  	case 4: o = (n%10)*(n/1000)*(n/10%10)*(n/100%10); break;
  	
	default: printf("ERROR!\n"); return 0;
  }	

  printf("%d\n", o);
  return 0;
}
