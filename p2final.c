#include<stdio.h>
int input()
{
  int d;
  printf("enter the digit\n");
  scanf("%d",&d);
  return d;
}
int cmp(int a,int b,int c)
{
  int largest;
  if (a>b && a>c)
  {
    largest=a;
  }
  else if(b>c)
  {
    largest=b;
  }
  else{
    largest=c;
  }
  return largest;
}
void output(int a,int b,int c,int largest)
{
  if(largest==a)
  {
    printf("%d is greater than %d and %d",a,b,c);
  }
  else if(largest==b)
  {
    printf("%d is greater than %d and %d",b,a,c);
  }
  else if(largest==c)
  {
    printf("%d is greater than %d and %d",c,a,b);
  }
}
int main()
{
  int x,y,z,w;
  x=input();
  y=input();
  z=input();
  w=cmp(x,y,z);
  output(x,y,z,w);
  return 0;
}