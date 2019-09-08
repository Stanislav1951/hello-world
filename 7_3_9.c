#include <stdio.h>

int main (){
	int m, c = 0, summ = 0;
	do{
		scanf ("%d", &m);
		if (m == 0 && c) break; 
		if (c && m!=-9999) summ += m;
		if (m == 0) c = 1;
		}
	while (m!=-9999);
	printf("%d\n", summ);
	return 0;
}
