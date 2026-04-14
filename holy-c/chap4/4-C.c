#include<stdio.h>

int main() {
  int score;
  scanf("%d", &score);
  if (score > 100 || score < 0) {
    printf("Input error!");
  } else if (score > 90) {
    printf("Very Good!\n");
  } else if (score > 80) {
    printf("Good!\n");
  } else if (score > 70) {
    printf("Middle!\n");
  } else if (score > 60) {
    printf("Pass!\n");
  } else {
    printf("No Pass!\n");
  }
  return 0;
}
