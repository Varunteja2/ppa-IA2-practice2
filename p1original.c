#include <stdio.h>
void input(float*base,float*height)
{
  printf("enter the length of the base");
  scanf("%f",base);
  printf("enter the length of the height");
  scanf("%f",height);
}
  void area(float base, float height, float*area)
{
  *area = ((base*height)/2);
}
void output(float base, float height, float area)
{
  printf("the area of the triangle is %f",area);
}
int main()
{
  float b,h,a;
  input(&b,&h);
  area(b,h,&a);
  output(b,h,a);
  return 0;
}