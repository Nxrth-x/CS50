#include <stdio.h>

int main(void) {
  char name[20];
  printf("What's your name?\n");
  fgets(name, sizeof(name), stdin);
  printf("Hello, %s!\n", name);
  return 0;
}