#include <stdio.h>

int main()
{
  int num1, num2;
  float sum, average;

  printf("Number 1: ");
  scanf("%d", &num1);

  printf("Number 2: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  // Cast sum to float to ensure decimal part in average
  average = sum / 2;

  printf("Sum = %.0f\n", sum);
  printf("Average = %.1f\n", average);

  return 0;
}