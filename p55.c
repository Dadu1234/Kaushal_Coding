#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkPartitioned(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  bool bRet = false;
  
  printf("Enter length of array:\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
	
  bRet = ChkPartitioned(ptr,iLength);
  
  if(bRet==true)
  {
    printf("Partitioned is possible\n");
  }
  else
  {
    printf("Partitioned is not possible\n");
  }
  
  return 0;
}
bool ChkPartitioned(int Arr[],int iSize)
{
  int iSum = 0;
  int i = 0;
  int iMax = Arr[0];
  int iRes1 = 0;
  for(i=1;i<iSize;i++)
  {
    if(Arr[i]>iMax)
	{
	  iMax = Arr[i];
	}
  }
  for(i=0;i<iSize;i++)
  {
    iSum = iSum + Arr[i];
  }
  iRes1 = iSum - iMax;
  if(iRes1==iMax)
  {
    return true;
  }
  else
  {
    return false;
  }
}