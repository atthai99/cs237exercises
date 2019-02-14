// A program to shift alphabetic characters, n steps forward.
// (c) 2019 Andrew Thai

#include <stdio.h>
#include <stdlib.h>

#define ABC_SIZE 26

void rotate(int n, int ch) {

  // for backwards rotation
  if (n < 0) {
    n = (n + ABC_SIZE) % ABC_SIZE; 
  }
    
  // lowercase
  if (ch >= 'a' && ch <= 'z') {
    ch = ((ch - 'a' + n) % ABC_SIZE) + 'a';
  }

  // uppercase
  else if (ch >= 'A' && ch <= 'Z') {
    ch = ((ch - 'A' + n) % ABC_SIZE) + 'A';
  }

  printf("%c", ch);
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  int current;
  while (EOF != (current = fgetc(stdin))) {
    rotate(n, current);
  }
  fputc('\n',stdout);
  return 0;
}
