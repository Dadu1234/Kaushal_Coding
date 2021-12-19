#include<stdio.h>
#include<stdlib.h>
int MaxProductSubarray(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = MaxProductSubarray(ptr,iLength);
  
  printf("Maximum product is %d\n",iRet);
  
  return 0;
}
int MaxProductSubarray(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int iMax = 0;
  iMax = (Arr[0]*Arr[i]*Arr[2]);
  for(i = 0;i<(iSize-2);i++)
  {
    for(j=i+1;j<(iSize-1);j++)
	{
	  for(k=j+1;k<iSize;k++)
	  {
	    if((iMax)<(Arr[i]*Arr[j]*Arr[k]))
		{
		  iMax = (Arr[i]*Arr[j]*Arr[k]);
		}
	  }
    }
  }
  return iMax;
}