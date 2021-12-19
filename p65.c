#include<stdio.h>
void Prime(int,int);
int main()
{ 
  int iNo1 = 0;
  int iNo2 = 0;
  
  printf("Enter first number\n");
  scanf("%d",&iNo1);
  
  printf("Enter second number\n");
  scanf("%d",&iNo2);
  
  Prime(iNo1,iNo2);
  
  return 0;
}
void Prime(int iValue1,int iValue2)
{
  int i = 0;
  int j = 0;
  for(i=iValue1;i<=iValue2;i++)
  {
    for(j=2;j<i;j++)
	{
	  if((i%j)==0)
	  {
	    break;
	  }
	}
	if(j==i)
	{
		printf("%d\t",i);
	}
  }
  
}