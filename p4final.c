#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter value\n");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int x,y,z;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  y=sum_n_arrays(x,a);
  out_put(x,a,y);
  return 0;
}