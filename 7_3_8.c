#include <stdio.h>
#define Codename 2517
// ?????????? 
int main (){
	int m, c = 0;
	do{
		scanf ("%d", &m);
		if (c) printf("%d ", m);
		if (m == Codename) c = 1;
		}
	while (m!=-9999);
	return 0;
}
