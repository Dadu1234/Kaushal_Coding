#include<stdio.h>
#include<stdbool.h>
bool ChkBit(int,int);
int main()
{
  int iNo = 0; 
  int iPos = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter position number\n");
  scanf("%d",&iPos);
  
  bRet = ChkBit(iNo,iPos);
  
  if(bRet==true)
  {
    printf("%dth bit is ON\n",iPos);
  }
  else
  {
    printf("%dth bit is OFF\n",iPos);
  }
  return 0;
}
bool ChkBit(int iValue,int iPos1)
{
  int iMask = 0x00000001;
  int iRes = 0;
  
  iMask = iMask << (iPos1-1);
  iRes = iMask & iValue;
  if(iRes==iMask)
  {
    return true;
  }
  else
  {
    return false;
  }
}