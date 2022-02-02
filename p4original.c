#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("enter the value\n");
  for( i=0;i<n;i++)
  {
    
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i,sum=0;
  for( i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  for (int i=1;i<n;i++)
  {
    printf("%d+",a[i-1]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int x,y,n;
  x=input_array_size();
  int a[n];
  input_array(x,a);
  y=sum_n_arrays(x,a);
  out_put(x,a,y);
  return 0;

}