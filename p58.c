#include<stdio.h>
int main()
{
	int Arr[3][3];
	int i = 0;
	int j = 0;
	int iRes = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	int iRet = 0;
	printf("Enter 9 elements for matrix\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&Arr[i][j]);
		}
	}
	printf("Entered elements are:\n");
	for(i=1;i<=3;i++)
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
	for(i=3;i>=1;i--)
	{
		for(j=1;j<=3;j++)
		{
			if(i==j)
			{
				iSum2 = iSum2 + Arr[i][j];
			}
		}
	}
	printf("%d\n",iSum2);
	iRet = iSum1 - iSum2;
	if(iRet<0)
	{
		iRet = -iRet;
	    printf("Difference is %d\n",iRet);
	}
	else
	{
		printf("Difference is %d\n",iRet);
	}
}