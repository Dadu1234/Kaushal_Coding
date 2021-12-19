//////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int FixedPoint(int[],int);
int main()
{
 int *ptr = NULL;
 int iNo = 0;
 int iCnt = 0;
 int iRet = 0;
 
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 ptr = (int *)malloc(iNo*sizeof(int));
 
 printf("Enter %d element\n",iNo);
 
 for(iCnt = 0;iCnt<iNo;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);
 }
 
 iRet = FixedPoint(ptr,iNo);
 
 printf("Fixed element is %d\n",iRet);

 return 0;
}
int FixedPoint(int Arr[],int iSize)
{
 int i = 0;
 for(i=0;i<iSize;i++)
 {
   if(Arr[i]==i)
   {
     return Arr[i];
	 break;
   }
 }
}
 
 