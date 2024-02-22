#include <stdio.h>
#define PHI 3.14159

int main()
{
  double radius, diameter, circumference, area;

  printf("Radius: ");
  scanf("%lf", &radius);

  diameter = 2 * radius;
  circumference = 2 * PHI * radius;
  area = PHI * radius * radius;

  printf("Diameter = %.2lf\n", diameter);
  printf("Circumference = %.2lf\n", circumference);
  printf("Area = %.2lf\n", area);

  return 0;
}
