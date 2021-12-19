///////////////////////////////////////////////////////////////////////////////////////////////////
// Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[].
///////////////////////////////////////////////////////////////////////////////////////////////////\\

#include<stdio.h>
int Occurence(int[],int,int);
int main()
{
 int iNo = 0;
 int iCnt = 0;
 int iRet = 0;
 int Arr[iNo];
 int iNumber = 0;
 
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 printf("Enter %d elements\n",iNo);
 
 for(iCnt = 0;iCnt<iNo;iCnt++)
 {
   scanf("%d",&Arr[iCnt]);
 }   
 
 printf("Enter that number you want to find its occurrence\n");
 scanf("%d",&iNumber);
 
 iRet = Occurence(Arr,iNo,iNumber);
 
 printf("Occurence of %d is %d\n",iNumber,iRet);
 
 return 0;
}
int Occurence(int Brr[],int iSize,int iValue)
{ 
  int iFreq = 0;
  int i = 0;
  for(i = 0;i<iSize;i++)
  {
    if(iValue==Brr[i])
	{
	  iFreq++;
	}
  }
  return iFreq;
}