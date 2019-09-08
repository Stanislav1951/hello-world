#include <stdio.h>

int main (){
	int n, res = 1, c=0;
	do{
	scanf ("%d", &n);
		if (n < 0 && n != -9999) res = 0;
		c++;
		}
	while (n != -9999);
	if (res && c > 1) printf("YES"); else printf("NO");
	return 0;
}
