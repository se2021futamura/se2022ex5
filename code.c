#include <stdio.h>

int main(void) {
  int i, j = 0;
  for (i = 0; i < 10; i++) {
    j++;
  }
  printf("%d", j);
  return 0;
}