#include<stdio.h>
#include<stdlib.h>
int Median(int[],int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  int iRet = 0;
  
  printf("Enter even size of array\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
  { 
   scanf("%d",&ptr[iCnt]);
  }
  
  iRet = Median(ptr,iNo);
  
  printf("Median is %d\n",iRet);
  
  return 0 ;
}

int Median(int Brr[],int iSize)
{
  
  int iRes = 0;
  
  int j = 0;
  
  j = (iSize)/2;
  
  iRes = (Brr[j] + Brr[j+1])/2;
  
  return iRes;
}