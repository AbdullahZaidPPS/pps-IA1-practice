#include<stdio.h>
struct _complex
{
  float real;
  float imaginary;
};
typedef struct _complex Complex;

Complex input_complex()
{
  Complex d;
  printf("Enter complex number\n");
  scanf("%f  %f",&d.real,&d.imaginary);
  return d;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%f + %fi + %f + %fi is %f + %fi\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex com1,com2,total;
  com1=input_complex();
  com2=input_complex();
  total=add(com1,com2);
  output(com1,com2,total);
  return 0;

}