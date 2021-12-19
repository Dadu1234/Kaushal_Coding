////////////////////////////////////////////////////////////////////
// WAP TO FIND CEILING OF GIVEN NUMBER IN AN ARRAY.
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Ceiling(int[],int,int);
int main()
{
  int iNo = 0;
  int Arr[iNo];
  int iRet = 0;
  int x  =0 ;
  int i = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(i=0;i<iNo;i++)
  {
    scanf("%d",&Arr[i]);
  }
  
  printf("Enter a number that you want to find ceiling\n");
  scanf("%d",&x);
  
  iRet = Ceiling(Arr,iNo,x);
  
  printf("Ceiling of %d is %d\n",x,iRet);
  
  return 0;
}
int Ceiling(int Brr[],int iSize,int y)
{
  int iCnt = 0;
  int iDiff = 0;
  iDiff = 0;
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    iDiff = y - Brr[iCnt];
	if(iDiff<=0)
	{
	  break;
	}
  }
  if(iCnt==iSize)
  {
    printf("Ceiling not found\n");
  }
  else
  {
    return Brr[iCnt];
  }
}
  