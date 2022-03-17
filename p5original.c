#include<stdio.h>
int input()
{
  int a;
  printf("enter any number :\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int r,i;
  for(i=1;i<=a&&i<=b;i++)
    {
      if(a%i==0&&b%i==0)
        r=i;
    }
  return r;
}
void output(int a,int b,int r)
{
  printf("the gcd numbers %d and %d is %d",a,b,r);
}
int main()
{
  int a,b,x;
  a=input();
  b=input();
  x=gcd(a,b);
  output(a,b,x);
  return 0;
}