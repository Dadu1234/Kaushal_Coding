/////////////////////////////////////////////////////////////////////
// Check whether array is consecutive or not.
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool ChkConsecutive(int[],int);
int main()
{
  int iNo = 0;
  int iCnt = 0;
  bool bRet = false;
  int Arr[iNo];
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
     scanf("%d",&Arr[iCnt]);
  }
  
  bRet = ChkConsecutive(Arr,iNo);
  
  if(bRet==true)
  {
    printf("Array is consecutive\n");
  }
  else
  {
    printf("Array is not consecutive\n");
  }
  
  return 0;
}
bool ChkConsecutive(int Brr[],int iSize)
{
  int iGreatest = 0;
  int iSmallest= 0;
  int i = 0;
  int iDiff = 0;
  iGreatest = Brr[0];
  iSmallest = Brr[0];
  
  for(i=1;i<iSize;i++)
  {
    if(Brr[i]>iGreatest)
	{
	  iGreatest = Brr[i];
	}
  }
  
  for(i=1;i<iSize;i++)
  {
    if(Brr[i]<iSmallest)
	{
	  iSmallest = Brr[i];
	}
  }
  iDiff = iGreatest - iSmallest;
  
  if(iDiff==(iSize-1))
  {
    return true;
  }
  else
  {
    return false;
  }
}