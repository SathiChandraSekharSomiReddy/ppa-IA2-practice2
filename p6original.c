#include<stdio.h>
void input_string(char *a)
{
  printf("enter the string :\n");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
  {
    m++;
  }
  return m;
}
void output(char *a,char reversea)
{
  printf("the reversea of thr string is :\n");
  for(int i=reversea-1;a[i]!='\0';i--)
    {
      printf("%c",a[i]);
    }
}
int main()
{
  int reverse_a;
  char a[100];
  input_string(a);
  reverse_a=str_reverse(a);
  output(a,reverse_a);
  return 0;
}