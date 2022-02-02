#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter any value\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,h=0;
  int sum;
  for(i=1;i<n;i++)
  {
    h=h+i;
  }
  sum=h+n;
  return sum;
  
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d",n,sum);
}
int main()
{
  int x,y;
  x = input_n();
  y = sum_n(x);
  output(x,y);
  return 0;
}
