///////////////////////////////////////////////////////////////////////////////////////////////////
// FIND THE NEXT GREATEST ELEMENT FOR EVERY ELEMENT.
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void NGE(int[],int);
int main()
{
  int iNo = 0;
  int Arr[iNo];
  int iCnt = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  NGE(Arr,iNo);
  
  return 0;
}
void NGE(int Brr[],int iSize)
{
  int i = 0;
  int j = 0;
  int next = 0;
  
  for(i=0;i<iSize;i++)
  {
	next = -1;
    for(j=i+1;j<iSize;j++)
	{
	  if(Brr[j]>Brr[i])
	  {
	    next = Brr[j];
	    break;
	  } 
	}
	printf("%d ------> %d\n",Brr[i],next);
  }
}
  