////////////////////////////////////////////////////////////////////////////////////////////////
// FIND EQUILIBRIUM INDEX OF GIVEN ARRAY.
// INPUT : -  A[] = {-7,1,5,2,-4,3,0}
// OUTPUT : - 3
// EXPLAINATION : - A[0]+A[1]+A[2] = A[4]+A[5]+A[6]
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int EQUILIBRIUM(int[],int);
int main()
{
  int iNo = 0;
  int Arr[iNo];
  int iCnt = 0;
  int iRet= 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  iRet = EQUILIBRIUM(Arr,iNo);
  
  printf("EQUILIBRIUM index of a given array is %d\n",iRet);
  
  return 0;
}
int EQUILIBRIUM(int Brr[],int iSize)
{
  int i = 0;
  int j = 0;
  int LeftSum = 0;
  int RightSum = 0;
  
  for(i=0;i<iSize;i++)
  { 
    LeftSum =0;
    for(j=0;j<i;j++)
	{
	  LeftSum = LeftSum + Brr[j];
	}
	
	RightSum = 0;
	for(j=i+1;j<iSize;j++)
	{
	  RightSum = RightSum + Brr[j];
	}
	
	if(LeftSum==RightSum)
	{
	  return i;
	}
  }
}