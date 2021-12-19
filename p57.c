#include<stdio.h>
#include<stdlib.h>
void DisplayFour(int[],int,int);
int main()
{
   int *ptr = NULL;
   int iLength = 0;
   int iCnt = 0;
   int iValue = 0;
   
   printf("Enter length of array\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(iLength*sizeof(int));
   
   printf("Enter %d elements\n",iLength);
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     scanf("%d",&ptr[iCnt]);
   }
   
   printf("Enter a value\n");
   scanf("%d",&iValue);
   
   DisplayFour(ptr,iLength,iValue);
   
   return 0;
}
void DisplayFour(int Arr[],int iSize,int iNo)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  
  for(i=0;i<(iSize-3);i++)
  {
    for(j=i+1;j<(iSize-2);j++)
	{
	  for(k=j+1;k<(iSize-1);k++)
	  {
	    for(l=k+1;l<(iSize);l++)
		{
		  if((Arr[i]+Arr[j]+Arr[k]+Arr[l])==iNo)
		  {
		     printf("%d\t%d\t%d\t%d\t",Arr[i],Arr[j],Arr[k],Arr[l]);
			 break;
		  }
		}
	  }
	}
  }
}