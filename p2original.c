#include<stdio.h>
int input()
{
  int d;
  printf("Enter the value\n");
  scanf("%d",&d);
  return d;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b && a>c)
  {
    largest=a;
  }
  else if(b>c)
  {
    largest=b;
  }
  else 
  {
    largest=c;
  }
  return largest;
} 
void output(int a,int b,int c,int largest)
{
  printf("%d is the largest of %d,%d and %d",largest,a,b,c);
}
int main()
{
  int x,y,z,e;
  x=input();
  y=input();
  z=input();
  e=cmp(x,y,z);
  output(x,y,z,e);

}