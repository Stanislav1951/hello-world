#include <stdio.h>
#define MAXX 100
// Chet, NeChet

int main (){
	int D[MAXX], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &D[i]);
	for (int i = 0; i < n; i++)
		if (!(D[i]%2)) printf("%d ", D[i]);
	for (int i = 0; i < n; i++)
		if ((D[i]%2)) printf("%d ", D[i]);
	return 0;
}
