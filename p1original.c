#include<stdio.h>
void input(float *base,float *height)
{
  printf("ENTER THE BASE OF TRIANGLE\n");
  scanf("%f",base);
  printf("ENTER THE HEIGHT OF TRIANGLE\n");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("THE AREA OF THE TRIANGLE WITH BASE %f and HEIGHT %f is %f\n",base,height,area);
}
int main()
{
  float x,y,area;
  input(&x,&y);
  find_area(x,y,&area);
  output(x,y,area);
  return 0;
}
