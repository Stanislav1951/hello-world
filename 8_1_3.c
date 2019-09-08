#include <stdio.h>
#define MAXX 100
// Palindrome

int main (){
	int D[MAXX], n, s = 0, l = 0, p;
	scanf("%d", &n); p = n - 1;
	for (int i = 0; i < n; i++)
		scanf("%d", &D[i]);
	do {
		s += D[l] - D[p];
		printf("(%d|%d|%d)",l , s, p);
		if (s) break;
		l++; p--;
		}
	while (l < (n/2));
	if (s) printf("NO\n");
	else printf("YES\n");
	return 0;
}
