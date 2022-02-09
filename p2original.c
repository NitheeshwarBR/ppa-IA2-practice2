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
void output(int a,int b,int scalene)
{
  
}