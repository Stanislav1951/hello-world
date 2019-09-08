#include <stdio.h>
#define massiv_L 100

int main (){
	int D[massiv_L], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &D[i]);
	for (int i = n; i > 0; i--)
		printf("%d ", D[i-1]);
	return 0;
}
