#include<stdio.h>
float input()
{
  float n;
  printf("Enter the value for whic you want to determine the square root of\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float p=n/2;
  float sqrt_result;
  sqrt_result= 0.5 *(p+(n/p));
  while((p-sqrt_result)>0.0000001)
  {
    p=sqrt_result;
    sqrt_result= 0.5 *(p+(n/p));
  }
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
  printf("The square root of %f is %f",n,sqrt_result);
}
int main()
{
  float x,y;
  x=input();
  y=my_sqrt(x);
  output(x,y);
  return 0;
}