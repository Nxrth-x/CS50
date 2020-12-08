#include <stdio.h>

int main(void) {
  int number;
  do {
    printf("Do you agree?\n1 - Yes\n2 - No\nType: ");
    scanf("%d", &number);
  } while(number != 1);
  printf("Agreed! 😎\n");
  return 0;
}