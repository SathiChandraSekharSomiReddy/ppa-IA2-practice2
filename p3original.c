#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  int i,count=0;
  for(i=2;i<=n;++i)
  {
    if(n%i==0)
    count ++;
  }
  return count;
}

void output(int n,int count)
{
  if(count>>1)
  printf("%d is a composite number",n);
  else
  printf("%d is not a composite number",n);
}

int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}