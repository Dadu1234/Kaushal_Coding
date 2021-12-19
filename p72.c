#include<stdio.h>
int Power(int,int);
int main()
{
  int iBase = 0;
  int iMantisa = 0;
  int iRet = 0;
  
  printf("Enter base part\n");
  scanf("%d",&iBase);
  
  printf("Enter mantisa part\n");
  scanf("%d",&iMantisa);
  
  iRet = Power(iBase,iMantisa);
  
  printf("Result is %d\n",iRet);
  
  return 0;
}
int Power(int iBase1,int iMantisa1)
{
  int i = 0;
  int iRes = 1;
  for(i=1;i<=iMantisa1;i++)
  {
    iRes = iRes*iBase1;
  }
  return iRes;
}