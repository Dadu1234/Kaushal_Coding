////////////////////////////////////////////////////////////////////////////////////////////////////
// SEGREGATE EVEN AND ODD NUMBERS.EVEN SHOULD COME FIRST.
// Input = {12,34,45,9,8,90,3}
// Output = {12,34,8,90,45,3}
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void SEGREGATE(int[],int);
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
  
  SEGREGATE(Arr,iNo);
  
  return 0;
}
void SEGREGATE(int Brr[],int iSize)
{
  int iCnt = 0;
  int Res[iSize];
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	  if(Brr[iCnt]%2==0)
	  {
		   Res[iCnt] = Brr[iCnt];
		   printf("%d\t",Res[iCnt]);
	  }
  }
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	  if(Brr[iCnt]%2!=0)
	  {
		  Res[iSize-iCnt] = Brr[iCnt];
		  printf("%d\t",Res[iSize-iCnt]);
	  }
  }
} 