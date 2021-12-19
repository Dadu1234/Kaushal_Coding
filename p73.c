#include<stdio.h>
#include<stdlib.h>
int CalculateCost(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iThreshold = 0;
  int iRet = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter threshold value\n");
  scanf("%d",&iThreshold);
  
  iRet = CalculateCost(ptr,iLength,iThreshold);
  
  printf("Minimum cost is %d\n",iRet);
  
  return 0;
}
int CalculateCost(int Arr[],int iSize,int iValue)
{
  int i = 0;
  int j = 0;
  int iSum1 = 0;
  int iSum2 = 0;
  int iSum3 = 0;
  int k = 0;
  for(i=0;i<iSize;i++)
  {
    iSum1 = iSum1 + Arr[i];
  }
  //printf("iSUM1 is %d\n",iSum1);
  
  for(j=0;j<iSize;j++)
  {
    if(j%2!=0)
	{
	  iSum2 = iSum2 + Arr[j];
	}
  }
  //printf("ISUM2 is %d\n",iSum2);
  
  iSum3 = Arr[(iSize/iValue)] + Arr[iSize-1];
  //printf("ISUM3 is %d\n",iSum3);
  
  if((iSum1<iSum2) && (iSum1<iSum3))
  {
	  return iSum1;
  }
  else if((iSum2<iSum1) && (iSum2<iSum3))
  {
	  return iSum2;
  }
  else
  {
	  return iSum3;
  }
}