#include<stdio.h>
int input()
{
  int x;
  printf("ENTER THE SIDE OF THE TRIANGLE\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
    return 0;
  }

}
void output(int a,int b,int c,int scalene)
{
  if(scalene==0)
  {
    printf("the triangle with sides %d , %d and %d is scalene\n",a,b,c);
  }
  else
  {
    printf("it is not a scalene triangle\n");
  }

}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=check_scalene(a,b,c);
  output(a,b,c,result);
  return 0;
}