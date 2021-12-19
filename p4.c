/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that prod[i]
// equal to the product of all the elements of arr[] except arr[i]
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void ProductArray(int[],int);
int main()
{
  int iNo = 0;
  int i = 0;
  int Arr[iNo];
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  for(i=0;i<iNo;i++)
  {
    scanf("%d",&Arr[i]);
  }
  
  ProductArray(Arr,iNo);
  
  return 0;
}
void ProductArray(int Brr[],int iSize)
{
  int iCnt = 0;
  int Product[iSize];
  int iMultiply = 1;
  int iRes = 0;
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    iMultiply = iMultiply*Brr[iCnt];
  }
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    iRes = iMultiply/Brr[iCnt];
    Product[iCnt] = iRes;
  }
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("%d\t",Product[iCnt]);
  }
}
    