#include <stdio.h>

int main(){
	int n, c=0;
	scanf("%d", &n);
	c = n;
	while (n) {scanf("%d", &n); if (n) c = c + n;}
	printf("%d", c);
	return 0;
}
