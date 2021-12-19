#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkAdjoint(int[],int,int[],int);
int main()
{
  int *ptr1 = NULL;
  int *ptr2 = NULL;
  int iLength1 = 0;
  int iLength2 = 0;
  int iCnt1 = 0;
  int iCnt2 = 0;
  bool bRet = false;
  printf("Enter length of 1st array\n");
  scanf("%d",&iLength1);
  
  ptr1 = (int *)malloc(iLength1*sizeof(int));
  
  printf("Enter %d elements\n",iLength1);
  
  for(iCnt1=0;iCnt1<iLength1;iCnt1++)
  {
    scanf("%d",&ptr1[iCnt1]);
  }
  printf("Enter length of 2nd array\n");
  scanf("%d",&iLength2);
  
  ptr2 = (int *)malloc(iLength2*sizeof(int));
  
  printf("Enter %d elements\n",iLength2);
  
  for(iCnt2=0;iCnt2<iLength2;iCnt2++)
  {
    scanf("%d",&ptr2[iCnt2]);
  }
  
  bRet = ChkAdjoint(ptr1,iLength1,ptr2,iLength2);
  
  if(bRet==true)
  {
    printf("Both arrays are adjoint\n");
  }
  else
  {
    printf("Arrays are not adjoint\n");
  }
  
  return 0;
}
bool ChkAdjoint(int Arr[],int iSize1,int Brr[],int iSize2)
{
  int iRes = 0;
  iRes = Brr[0] - Arr[iSize1-1];
  if(iRes==1)
  {
    return true;
  }
  else
  {
    return false;
  }
}