#include<stdio.h>
int input_number()
{
  int n;
  printf("ENTER THE NUMBER\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int composite=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      composite++;
    }
    
  }
  return composite;
}
void output(int n,int composite)
{
  if(composite>2)
  {
    printf("%d is a composite number\n",n);
  }
  else{
    printf("%d is not composite number\n",n);
  }
  
}
int main()
{
  int a,result;
  a=input_number();
  result=is_composite(a);
  output(a,result);
  return 0;
}