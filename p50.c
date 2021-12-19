///////////////////////////////////////////////////////////////////////////////////
//CHK 24TH BIT IS ON
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool ChkBit(int);
int main()
{
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iValue);
  
  bRet = ChkBit(iValue);
  
  if(bRet==true)
  {
    printf("Bit is ON\n");
  }
  else
  {
    printf("Bit is OFF\n");
  }
  
  return 0;
}
bool ChkBit(int iNo)
{
  int iMask = 0x00000000800000000000000000000000;
  int iRes = 0;
  iRes = iMask & iNo;
  if(iRes==iMask)
  {
    return true;
  }
  else
  {
    return false;
  }
}