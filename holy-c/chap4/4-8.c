#include<stdio.h>

int main() {
  int score;
  char grade;
  scanf("%d", &score);
  if (score > 100) {
    return 1;
  } else if (score > 89 ) {
    grade = 'A';
  } else if (score > 79) {
    grade = 'B';
  } else if (score > 69) {
    grade = 'C';
  } else if (score > 59) {
    grade = 'D';
  } else if (score > 0) {
    grade = 'E';
  } else {
    return 1;
  }
  putchar(grade);
  return 0;
}
