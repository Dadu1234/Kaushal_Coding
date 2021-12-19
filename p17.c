////////////////////////////////////////////////////////////////////////////////////////////////////
// YOU HAVE GIVEN TWO ARRAYS arr1[] and arr2[] .Check whether arr2[] is a subset of arr1[] or not.
//////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Subset(int[],int[],int,int);
int main()
{
 int *ptr1 = NULL;
 int *ptr2 = NULL;
 int iNo1 = 0;
 int iNo2 = 0;
 int iCnt1 = 0;
 int iCnt2 = 0;
 bool bRet = false;
 
 printf("Enter size for 1st array\n");
 scanf("%d",&iNo1);
 
 ptr1 = (int *)malloc(iNo1*sizeof(int));
 
 printf("Enter %d elements for first array\n",iNo1);
 
 for(iCnt1=0;iCnt1<iNo1;iCnt1++)
 {
   scanf("%d",&ptr1[iCnt1]);
 }
 
 printf("Enter size for 2nd array\n");
 scanf("%d",&iNo2);
 
 ptr2 = (int *)malloc(iNo2*sizeof(int));
 
 printf("Enter %d elements for second array\n",iNo2);
 
 for(iCnt2=0;iCnt2<iNo2;iCnt2++)
 {
   scanf("%d",&ptr2[iCnt2]);
 }
 
 bRet = Subset(ptr1,ptr2,iNo1,iNo2);
 
 if(bRet==true)
 {
   printf("Second array is subset of first array\n");
 }
 else
 {
   printf("Second array is not subset of first array\n");
 }
 
 return 0;
}
bool Subset(int Arr[],int Brr[],int iSize1,int iSize2)
{
  int i = 0;
  int j = 0;
  
  for(j=0;j<iSize2;j++)
  {
    for(i=0;i<iSize1;i++)
	{
	  if(Brr[j]==Arr[i])
	  {
	    break;
	  }
	}
  }
  if(i==iSize1)
  {
    return false;
  }
  else
  {
    return true;
  }
}
  