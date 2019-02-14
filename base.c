// A program to write integers to output, in base b, the first argument
// (c) 2019 Andrew Thai

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void putBase(int b, int n) {
  if (n >= b) putBase(b,n/b);

  int nextChar = n%b + '0';
  
  //account for gap between '9' and 'A'
  if (nextChar > '9') { 
    nextChar = 'A' + nextChar - '9' - 1;
  }
  
  fputc((nextChar), stdout);
}

int main(int argc, char **argv) {
  
  int b = atoi(argv[1]);
  int n;
  while (1 == fscanf(stdin, "%d", &n)) {
    putBase(b, n);
    fputc('\n', stdout);
  }  
  return 0;
}
