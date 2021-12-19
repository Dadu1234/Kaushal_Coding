#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkSubset(int[],int,int[],int);
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
  
  bRet = ChkSubset(ptr1,iLength1,ptr2,iLength2);
  
  if(bRet==true)
  {
    printf("2nd array is subset if 1st");
  }
  else
  { 
    printf("Not a subset\n");
  }
 
  return 0;
}
bool ChkSubset(int Arr[],int iSize1,int Brr[],int iSize2)
{
  int i = 0;
  int j = 0;
  for(i=0;i<iSize2;i++)
  {
    for(j=0;j<iSize1;j++)
	{
	  if(Brr[i]==Arr[j])
	  { 
	    break;
      }
	}
	if(j==iSize1)
	{
		return false;
    }
  }
  if(i==iSize2)
  {
	  return true;
  }
 
  
}
    