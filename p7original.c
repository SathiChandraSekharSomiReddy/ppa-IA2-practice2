#include <stdio.h>
typedef struct triangle
{
  float base,altitude,area;
}Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the value of base and altitude:\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
  printf("area of triangle with base=%0.6f and altitude=%0.6f is %0.6f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}