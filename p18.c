//////////////////////////////////////////////////////////////////////////////////////////////////////////
// FIND MINIMUM DISTANCE BETWEEN TWO NUMBERS.
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Shortest(int[],int,int,int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  int iValue1 = 0;
  int iValue2 = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
     scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter first number\n");
  scanf("%d",&iValue1);
  
  printf("Enter second number\n");
  scanf("%d",&iValue2);
  
  iRet = Shortest(ptr,iNo,iValue1,iValue2);
  
  printf("Shortest Distance is %d\n",iRet);
  
  return 0;
}
int Shortest(int Brr[],int iSize,int iNo1,int iNo2)
{
  int i = 0;
  int j = 0;
  int iIndex1 = 0;
  int iIndex2 = 0;
  int iDistance = 0;
  
  for(i = 1;i<=iSize;i++)
  {     
      if(Brr[i]==iNo1)
	  {
	    iIndex1 = i;
	    break;
	  }
  }
  for(j = 1;j<=iSize;j++)
  {
     if(Brr[j]==iNo2)
	 {
	    iIndex2 = j;
		break;
	 }
  }
  
  iDistance = iIndex2 - iIndex1;
  
  return iDistance;
}
