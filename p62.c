#include<stdio.h>
#include<stdlib.h>
int Median(int[],int[],int,int);
int main()
{
  int iCnt1 = 0;
  int iCnt2 = 0;
  int *ptr1 = NULL;
  int *ptr2 = NULL;
  int iLen1 = 0;
  int iLen2 = 0;
  int iRet = 0;
  
  printf("Enter length for 1st array\n");
  scanf("%d",&iLen1);
  
  ptr1 = (int *)malloc(iLen1*sizeof(int));
  
  printf("Enter %d elements for 1st array\n",iLen1);
  for(iCnt1 = 0;iCnt1<iLen1;iCnt1++)
  {
    scanf("%d",&ptr1[iCnt1]); 
  }
  printf("Enter length of second array\n");
  scanf("%d",&iLen2);
  
  ptr2 = (int *)malloc(iLen2*sizeof(int));
  printf("Enter %d elements for 2nd array\n",iLen2);
  for(iCnt2=0;iCnt2<iLen2;iCnt2++)
  {
    scanf("%d",&ptr2[iCnt2]);
  }
  iRet = Median(ptr1,ptr2,iLen1,iLen2);
 
  printf("\nMedian is %d\n",iRet);
  return 0;
}
int Median(int Arr[],int Brr[],int iSize1,int iSize2)
{
  int i = 0;
  int iMerged = 0;
  iMerged = iSize1 + iSize2;
  int iIndex = 0;
  int Crr[20];
  int iMedian = 0;
  for(i=0;i<iSize1;i++)
  {
    Crr[i] = Arr[i];
  }
  for(i=iSize1;i<iMerged;i++)
  {
    Crr[i] = Brr[i-iSize1];
  }
  printf("Merged array is :\n");
  for(i=0;i<iMerged;i++)
  {
    printf("%d\t",Crr[i]);
  }
  iIndex = iMerged/2;
  
  iMedian = (Crr[iIndex] + Crr[iIndex-1])/2;
  
  return iMedian;
}