#include <stdio.h>

int main()
{
  double a;
  double result;
  scanf("%lf",&a);
  if (a==(int)a)
  {
    result=a;
  }
  else if (a<0)
  {
    result=(int)a-1;
  }
  else
  {
    result=(int)a;
  }
  
  printf("without built in:%lf",result);
  

  return 0;
}