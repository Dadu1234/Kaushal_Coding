#include<stdio.h>
int PossibleArrangements(int,int);
int combination(int,int);
int fact(int);
int main()
{
  int iRound = 0;
  int iPeoples = 0;
  int iRet = 0;
  printf("Enter number of round tables\n");
  scanf("%d",&iRound);
  
  printf("Enter number of attendees\n");
  scanf("%d",&iPeoples);
  
  iRet = PossibleArrangements(iRound,iPeoples);
  
  printf("Total possible arrangements are %d\n",iRet);
  
  return 0;
}
int PossibleArrangements(int R,int N)
{
  int iDivision = 0;
  int iRemaining = 0;
  int iRes = 0;
  
  iDivision = N/R;
  
  iRemaining = N - iDivision;
  
  iRes = combination(N,iRemaining)*combination(iDivision,iDivision);
  
  return iRes;
}
int combination(int a,int b)
{
  int iAns = 0;
  iAns = fact(a)/(fact(a-b)*fact(b));
  return iAns;
}
int fact(int x)
{
  int iFact = 1;
  int j = 1;
  for(j=x;j>=1;j--)
  {
    iFact = iFact*j;
  }
  return iFact;
}