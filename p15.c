/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void MaxSubArray(int[],int,int);
int MAXIMUM(int[],int);
int main()
{
 int iNo = 0;
 int Arr[iNo];
 int iCnt = 0;
 int subsize = 0;
 
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 printf("Enter %d elements\n",iNo);
 
 for(iCnt = 0;iCnt<iNo;iCnt++)
 {
   scanf("%d",&Arr[iCnt]);
 }
 
 printf("Enter size of subarray\n");
 scanf("%d",&subsize);
 
 MaxSubArray(Arr,iNo,subsize);
 
 return 0;
}

void MaxSubArray(int Brr[],int iSize,int k)
{
  int i = 0;
  int s = 0;
  int iMax = 0;
  for(i = 0;i<iSize;i++)
  {
    for(s = i;s < (k + i);s++)
    {  
	   iMax = MAXIMUM(Brr,k);
	   
	}
  }
  for(k = 0;k<7;k++)
  {
	  printf("%d\t",iMax);
  }
}
int MAXIMUM(int Crr[],int N)
{
  int j = 0;
  int max = 0;
  max = Crr[0];
  
  for(j = 0;j<N;j++)
  {
	  if(Crr[j]>max)
	  {
		  max = Crr[j];
	  }
  }
  
  return max;
}