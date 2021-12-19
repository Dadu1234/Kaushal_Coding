#include<stdio.h>
#include<stdlib.h>
int LCM(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  int iRes = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = LCM(ptr,iLength);
  
  printf("LCM is %d\n",iRet);
  
  for(iCnt = 0;iCnt<iLength;iCnt++)
  {
	  iRes = iRet/ptr[iCnt];
	  if((iRes%2!=0) && (iRes%3!=0))
	  {
		  break;
	  }
  }
  if(iCnt==iLength)
  {
	  printf("YES");
  }
  else
  {
	  printf("NO");
  }
  
  return 0;
}
int LCM(int Arr[],int iSize)
{
  int i = 0;
  int iMultiply = 1;
  int iLcm = 0;
  int iMax = Arr[0];
  int j = 0;
  
  for(j=i+1;j<iSize;j++)
  {
    if(Arr[j]>iMax)
	{
	  iMax = Arr[j];
	}
  }
  
  for(i=0;i<iSize;i++)
  {
    iMultiply = iMultiply*Arr[i];
  }
  for(iLcm=iMax;iLcm<=iMultiply;iLcm++)
  {
    for(i=0;i<iSize;i++)
	{
	 if(iLcm%Arr[i]!=0)
	 {
	    break;
     }
	}
	if(i==iSize)
	{
	  return iLcm;
	 
	}
  }
  
  
}