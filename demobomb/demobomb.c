#include <stdio.h>
#include <string.h>

int check_code(int x) {
  if (x * 3 == x + 26) {
    return 1;
  } else {
    return 0;
  }
}

void explode() {
  printf("!!! BOOM !!!\n");
}

void defuse() {
  printf("Defused!\n");
}

int i; // global variable

int main() {
  int read = scanf("%d", &i);
  if (read != 1) {
    explode();
  } else {
    if (check_code(i)) {
      defuse();
    } else {
      explode();
    }
  }
  return 0;
}

