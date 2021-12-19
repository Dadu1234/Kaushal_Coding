//////////////////////////////////////////////////////////////////////////
//FIN SCALAR/DOT PRODUCT OF TWO ARRAYS.
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int ScalarProduct(int[],int,int[],int);
int main()
{
  int *ptr1 = NULL;
  int iLength1 = 0;
  int *ptr2 = NULL;
  int iLength2 = 0;
  int iCnt1 = 0;
  int iCnt2 = 0;
  int iRet = 0;
  printf("Enter length of first array\n");
  scanf("%d",&iLength1);
  
  ptr1 = (int *)malloc(iLength1*sizeof(int));
  
  printf("Enter %d elements for first array\n",iLength1);
  
  for(iCnt1=0;iCnt1<iLength1;iCnt1++)
  {
    scanf("%d",&ptr1[iCnt1]);
  }
  
  printf("Enter length of second array\n");
  scanf("%d",&iLength2);
  
  ptr2 = (int *)malloc(iLength2*sizeof(int));
  
  printf("Enter %d elements for second array\n",iLength2);
  
  for(iCnt2=0;iCnt2<iLength2;iCnt2++)
  {
    scanf("%d",&ptr2[iCnt2]);
  }
  
  iRet = ScalarProduct(ptr1,iLength1,ptr2,iLength2);
  
  printf("Minimum Scalar prduct is %d\n",iRet);
  
  return 0;
}

int ScalarProduct(int Arr[],int iSize1,int Brr[],int iSize2)
{
   int i = 0;
   int j = 0;
   int iSum = 0;
   int iMultiply = 1;
   
   for(i=0;i<iSize1;i++)
   {
     iSum = iSum + (Arr[i]*Brr[i]);
   }
   return iSum;
}