#include <stdio.h>
int input_side()
{
  int n;
  printf("enter the side of traingle:");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b&&b!=c&&c!=a)
  {
    return 1;
  }
  else 
  {
    return 0;
  }
}
void output( int isScalene)
{
  if(isScalene==1)
{

  printf("triangle is scalene\n");
}
else
{
  printf("triangle is not scalene\n");
}
}
int main()
{
  int a=input_side();
  int b=input_side();
  int c=input_side();
  int result=check_scalene(a,b,c);
  output(result);
  return 0;

}
