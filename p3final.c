#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter a value");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int z=0;
  int sum;
  for (int i=1;i<n;i++)
  {
    z=z+i;
  }
  sum=z+n;
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
  int a,b,c;
  a=input_n();
  b=sum_n(a);
  output(a,b);
  return 0;
}