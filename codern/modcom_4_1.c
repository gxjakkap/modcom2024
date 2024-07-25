#include <stdio.h>
#include <limits.h>

int main(void) {
  int a, i;
  unsigned long long r[10001];
  unsigned long long m, l;

  scanf("%d", &a);

  for (i = 0; i < a; i++) {
    scanf("%llu", &r[i]);
  }

  l = ULLONG_MAX;
  m = 0;

  for (i = 0; i < a; i++) {
    if (r[i] > m) {
      m = r[i];
    }
    if (r[i] < l) {
      l = r[i];
    }
  }

  printf("%llu %llu\n", l, m);

  return 0;
}