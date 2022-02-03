#include<stdio.h>


float input()
{
  float n;
  printf("Enter the number for which you want to determine the square root of\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float s=n/2;
  float sqrt_result;
  sqrt_result=0.5 *(s+(n/s));
  while((s-sqrt_result)>0.000001)
  {
    s=sqrt_result;
    sqrt_result=0.5*(s+(n/s));
  }
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
  printf("The square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float a,b;
  a=input();
  b=my_sqrt(a);
  output(a,b);
  return 0;
}