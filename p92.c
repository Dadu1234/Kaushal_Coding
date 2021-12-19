#include<stdio.h>

int PossiblePermutations(int,int,int);
int Combination(int,int);
int fact(int);
int main()
{
  int iNo1 = 0;
  int iNo2 = 0;
  int k = 0;
  int iRet = 0;
  
  printf("Enter a lower frequency\n");
  scanf("%d",&iNo1);
  
  printf("Enter a higher frequency\n");
  scanf("%d",&iNo2);
  
  printf("Enter a positive Integer\n");
  scanf("%d",&k);
  
  iRet = PossiblePermutations(iNo1,iNo2,k);
  
  printf("Total number of permutations possible are %d\n",iRet);
  
  return 0;
}

int PossiblePermutations(int iValue1,int iValue2,int l)
{
  int iRes = 0;
  int CountEven = 0;
  int CountOdd = 0;
  int i = 0;
  int iRef = 1;
  int iCase1 = 1;
  int iCase2 = 2;
  int j = 0;
  for(i=iValue1;i<=iValue2;i++)
  {
    if(i%2==0)
	{
	  CountEven++;
	}
	else
	{
	  CountOdd++;
	}
  }
  
  if(l%2==0)
  { 
     for(j=0;j<l;j++)
	 {
        iCase1 = iCase1*Combination(CountEven,iRef);
	 }
  }
  iCase2 = ((l/2)*Combination(CountEven,iRef))*((l/2)*Combination(CountOdd,iRef));
  
  iRes = iCase1 + iCase2;
}
int Combination(int n,int r)
{
  int iAns = 0;
  iAns = fact(n)/(fact(n-r)*fact(r));
  return iAns;
}
int fact(int x)
{
  int iFact = 1;
  int m = 1;
  for(m=x;m>=1;m--)
  {
    iFact = iFact*m;
  }
  return iFact;
}