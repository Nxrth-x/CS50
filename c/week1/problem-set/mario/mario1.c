#include <stdio.h>

void mario(int);

int main(void) {
  int number;
  do {
    printf("Type in the number of rows: ");
    scanf("%d", &number);
  } while(number < 1 || number > 8);
	mario(number);
  return 0;
}

void mario(int n) {
  int spaces = n - 1;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j<spaces) printf(" ");
      else printf("#");
    }
    printf("\n");
    spaces--;
  }
}