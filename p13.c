////////////////////////////////////////////////////////////////////////////////////////////
// FIND SMALLEST MISSING NUMBER IN A GIVEN ARRAY.
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SmallestMissing(int[],int,int);
int main()
{
	 int n = 0;
	 int Arr[n];
	 int m = 0;
	 int iCnt = 0;
	 int iRet = 0;
	 
	 printf("Enter total limit\n");
	 scanf("%d",&m);
	 
	 printf("How many elements do you want to print in array\n");
	 scanf("%d",&n);
	 
	 printf("Enter %d elements\n",n);
	 
	 for(iCnt = 0;iCnt<n;iCnt++)
	 {
		 scanf("%d",&Arr[iCnt]);
	 }
	 
	 iRet = SmallestMissing(Arr,n,m);
	 
	 printf("Smallest missing number is %d\n",iRet);
	 
	 return 0;
}
int SmallestMissing(int Brr[],int iSize,int iValue)
{
	 int i = 0;
	 int j = 0;
	 int iRes = 0;
	 for(i = 0;i<iValue;i++)
	 {
		 for(j = 0;j<iSize;j++)
		 { 
	        if(i==Brr[j])
			{
				 break;
			}
		 }
	 }
	 
	 if(j==iSize)
	 {
		 return i--;
		 
	 }
	 
	 
}