// A program to whiten a stream of bits.
// (c) 2019 Andrew Thai

#include<stdio.h>

int getbit() {
  int c;
  for (c = fgetc(stdin); c != EOF && c != '1' && c != '0'; c = fgetc(stdin));
  return c;
}

int main() {
  int a, b;
  while ((EOF != (a = getbit())) && (EOF != (b = getbit()))) {
    if (a != b) {
      printf("%c\n", a);
    }
  }
  return 0;
}
