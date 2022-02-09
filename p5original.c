#include<stdio.h>
int input()
{
  int x;
  printf("ENTER THE NUMBER\n");
  scanf("%d",&x);
  return x;
}
int gcd(int a,int b)
{
  int gcd;
  if(a<b)
  {
    gcd=a;

  }
  else{
    gcd=b;
  }
  for(int i=1;i<=gcd;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}