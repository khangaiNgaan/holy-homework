#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932

int main(){
  double x, y;
  scanf("%lf %lf", &x, &y);
  double rad = x * PI / 180.0;
  printf("sin(x):%f\n", sin(rad));
  printf("cos(x):%f\n", cos(rad));
  printf("|x|:%f\n", fabs(x));
  printf("e的x次方:%f\n", exp(x));
  printf("x的y次方:%f\n", pow(x,y));
  return 0;
}
