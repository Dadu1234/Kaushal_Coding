#include<stdio.h>
void DisplayPrime(int);
int main()
{
 int iNo = 0;
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 DisplayPrime(iNo);
 
 return 0;
}
void DisplayPrime(int iValue)
{
  int i = 0;
  int j = 0;
  int iCount = 0;
  int Arr[50];
  int k = 0;
  int l = 0;
  for(i=2;i<=(iValue-1);i++)
  {
    for(j=2;j<i;j++)
	{
	  if(i%j==0)
	  {
	    break;
	  }
	}
	if(j==i)
	{
	  Arr[k] = i;
	  k++;
	  iCount++;
	 
	}
  }
  for(k=0;k<iCount;k++)
  {
	  printf("%d\t",Arr[k]);
  }
  printf("\n");
  for(k=0;k<(iCount-1);k++)
  {
	  for(l=k+1;l<iCount;l++)
	  {
		  if((Arr[k]+Arr[l])==iValue)
		  {
			  printf("%d\t%d\n",Arr[k],Arr[l]);
		  }
	  }
  }
}
	
  