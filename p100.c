#include<stdio.h>
#include<math.h>
int SpecialSeries(int);
int main()
{
   int iRet = 0;
   int iIndex = 0;
   
   printf("Enter a index number on which you want number at that index\n");
   scanf("%d",&iIndex);
   
   iRet = SpecialSeries(iIndex);
   
   printf("Number at that index is %d\n",iRet);
   
   return 0 ;
}
int SpecialSeries(int iValue)
{
  int Arr[20];
  int iRes = 0;
  int i = 0;
  int iCnt = 0;
  for(i=0;i<20;i++)
  {
    if(i%2==0)
	{
	  Arr[i] = pow(2,i/2);
	}
	else
	{
	  
	  Arr[i] = pow(3,iCnt);
	  iCnt++;
	}
	if(i==iValue)
	{
		 return Arr[i];
	}
  }
  
}