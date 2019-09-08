#include <stdio.h>
//Возрастающая последовательность #2
int main (){
	int m, p, c = 1;
	scanf("%d", &m); p = m;
	while (m!=-9999){
		scanf ("%d", &m);
		if (m <= p && m != -9999) {p = 0; break;}
		else p = m;
		c++;
		}
	if (p) printf("0\n"); else  printf("%d\n", c);
	return 0;
}
