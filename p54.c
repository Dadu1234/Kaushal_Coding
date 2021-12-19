#include<stdio.h>
#include<stdlib.h>
int SubArray(int[],int);
int MINIMUM(int,int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iNo = 0;
  int iRet = 0;
  
  printf("Length of array is:\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = SubArray(ptr,iNo);
  printf("1st index of subarray is 1 and last index is %d\n",(2*iRet));
  return 0;
}
int SubArray(int Arr[],int iSize)
{
  int i = 0;
  int iCnt1 = 0;
  int iCnt2 = 0;
  int iResult = 0;
  for(i=0;i<iSize;i++)
  {
    if(Arr[i]==0)
	{
	  iCnt1++;
	}
  }
  for(i=0;i<iSize;i++)
  {
     if(Arr[i]==1)
	 {
	   iCnt2++;
	 }
  }
  
  iResult = MINIMUM(iCnt1,iCnt2);
  
  return iResult;
}
int MINIMUM(int a,int b)
{
  if(a<b)
  {
    return a;
  }
  else
  {
     return b;
  }
}