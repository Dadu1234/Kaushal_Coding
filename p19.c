////////////////////////////////////////////////////////////////////////////////////////////////
// FIND MISSING AND REPEATING ELEMENT
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int REPEATING(int[],int);
int MISSING(int[],int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  int iRet1 = 0;
  int iRet2 = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt = 0;iCnt<iNo;iCnt++)
  {
     scanf("%d",&ptr[iCnt]);
  }
  iRet1 = REPEATING(ptr,iNo);
  
  printf("Repeating element is %d\n",iRet1);
  
  iRet2 = MISSING(ptr,iNo);
  
  printf("Missing is %d\n",iRet2);
  
  return 0;
}
int REPEATING(int Brr[],int iSize)
{
  int i = 0;
  int j = 0;
  for(i= 0;i<iSize;i++)
  {
    for(j=(i+1);j<iSize;j++)
	{
	   if(Brr[i]==Brr[j])
	   {
	     return Brr[i];
	   }
	}
  }
  
}
int MISSING(int Crr[],int iSize1)
{
	 int k = 0;
	 int itotal = 0;
	 int iRepeating  = 0;
	 int iSum = 0;
	 int iDiff = 0;
	 int iRes = 0;
	 
	 itotal = ((iSize1)*(iSize1+1))/2;
	 iRepeating = REPEATING(Crr,iSize1);
	 
	 for(k = 0;k < iSize1;k++)
	 {
		 iSum = iSum + Crr[k];
	 }
	 
	 iDiff = iSum - itotal;
	 
	 if(iRepeating>iDiff)
	 {
		  iRes = iRepeating - iDiff;
          return iRes;
	 }
	 else
	 {
		  iRes = iRepeating + iDiff;
		  return iRes;
	 }
}