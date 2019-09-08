#include <stdio.h>

int main(){
	int N, q = 0, i = 0;
	scanf("%d", &N);
	i = N;
	while (i && i != 2){
		if (!(i%2)) i = i / 2;
		else i = 0;
		//printf("%d ", i);
	}
	if (i == 2 || N == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
