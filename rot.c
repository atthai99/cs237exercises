// A program to shift alphabetic characters, n steps forward.
// (c) 2019 Andrew Thai

#include <stdio.h>
#include <stdlib.h>
 
void rotate(int n, int ch) {

  // lowercase
  if (ch >= 'a' && ch <= 'z') {
    ch = ((ch - 'a' + n) % 26) + 'a';
  }

  // uppercase
  else if (ch >= 'A' && ch <= 'Z') {
    ch = ((ch - 'A' + n) % 26) + 'A';
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
