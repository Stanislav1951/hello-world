#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int S, E, res;
  srand(time(NULL));
  scanf("%d %d", &S, &E);
  res = S + rand()%(E-S+1);
  printf("%d\n", res);
  return 0;
}
