#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n == -9999) return 1;
	printf("%d ", n);
	while (n != -9999) {scanf("%d", &n); if (n != -9999) printf("%d ", n);}
	return 0;
}
