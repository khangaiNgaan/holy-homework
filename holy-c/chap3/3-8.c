#include<stdio.h>

int main() {
  char letter;
  letter = getchar();
  letter += 32;
  putchar(letter);
  return 0;
}
