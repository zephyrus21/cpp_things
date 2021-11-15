#include <stdio.h>

int main() {
  int english, maths, physics;
  printf("Enter marks of each subject\n");
  printf("enter marks of english\n");
  scanf("%d", &english);
  printf("enter marks of maths\n");
  scanf("%d", &maths);
  printf("enter marks of physics\n");
  scanf("%d", &physics);
  int totalmarks = english + maths + physics;
  printf("Total marks secured=%d\n", totalmarks);
  float a = totalmarks / 300.0;
  float percentage = a * 100.0;
  printf("Percentage you secured=%f\n", percentage);
  if ((percentage >= 40) && (english >= 33 || maths >= 33 || physics >= 33))
    printf("Your percentage is %f and you are pass", percentage);
  else
    printf("Your percentage is %f and you are fail", percentage);
  return 0;
}