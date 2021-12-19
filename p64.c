#include<stdio.h>
int main()
{ 
  int Arr[3][3];
  int i = 0;
  int j = 0;
  int iSum1 = 0;
  int iSum2 = 0;
  
  printf("Enter 9 elements for matrix\n");
  for(i=1;i<=3;i++)
  {
	  for(j=1;j<=3;j++)
	  {
		  scanf("%d",&Arr[i][j]);
	  }
  }
  printf("Entered elements in matrix format is:\n");
  for(i = 1;i<=3;i++)
  {
	  for(j=1;j<=3;j++)
	  {
		   printf("%d\t",Arr[i][j]);
	  }
	  printf("\n");
  }
  
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
	{
	  if(i==j)
	  {
	    iSum1 = iSum1 + Arr[i][j];
	  }
	}
  }
  printf("%d\n",iSum1);
}