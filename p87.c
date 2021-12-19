#include<stdio.h>
#include<stdlib.h>
int SumAbsoluteDifference(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  int iValue = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter optimal solution\n");
  scanf("%d",&iValue);
  
  iRet = SumAbsoluteDifference(ptr,iLength,iValue);
  
  printf("Sum of absolute difference is %d\n",iRet);
  
  return 0;
}

int SumAbsoluteDifference(int Arr[],int iSize,int iNo)
{
  int iSum = 0;
  int iRes = 0;
  int i = 0;
  for(i=0;i<iSize;i++)
  {
    iRes = Arr[i] - iNo;
    if(iRes<0)
	{
	  iRes = -iRes;
	}
	iSum = iSum + iRes;
  }
  return iSum;
}