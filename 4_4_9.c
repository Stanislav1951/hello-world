#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int N, res;
  srand(time(NULL));
  scanf("%d", &N);
  res = rand()%(N+1);
  printf("%d\n", res);
  return 0;
}
