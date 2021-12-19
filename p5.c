////////////////////////////////////////////////////////////////
// SAME PREVIOUS QUESTION WITHOUT USING / OPERATOR
////////////////////////////////////////////////////////////////

#include<stdio.h>
void ProductArray(int[],int);
int main()
{ 
  int iNo = 0;
  int Arr[iNo];
  int i = 0;
  
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
  int iMultiply = 1;
  int iCnt = 0;
  int Product[iCnt];

  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	 Brr[iCnt] = 1;
	 for(iCnt=0;iCnt<iSize;iCnt++)
	 {
	   
       iMultiply = iMultiply*Brr[iCnt];
	 }
	 Product[iCnt] = iMultiply;
	 printf("%d\t",Product[iCnt]);
  }
  
  /*for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    printf("%d\t",iMultiply);
  }*/
}
  