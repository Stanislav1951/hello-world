#include <stdio.h>
#define MAXX 100
// Last is Biggest

int main (){
	int D[MAXX], n, c = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &D[i]);
	for (int i = 0; i < n; i++){
		if (D[i] < D[n-1]) {printf("%d ", D[i]); c++;}}
	if (!c) printf("0");
	printf("%d\n", c);
	return 0;
}
