#include<stdio.h>
int Permutation(int,int);
int fact(int);
int main()
{
  int iPeople = 0;
  int iSeats = 0;
  int iRet = 0;
  printf("Enter number of peoples\n");
  scanf("%d",&iPeople);
  
  printf("Enter number of seats\n");
  scanf("%d",&iSeats);
  
  iRet = Permutation(iPeople,iSeats);
  
  printf("Result is %d\n",iRet);
  
  return 0;
}
int Permutation(int n,int r)
{
  int iRes = 0;
  int iDen = 0;
  iDen = n-r;
  iRes = fact(n)/fact(iDen);
  return iRes;
}
int fact(int iNo)
{
  int i = 0;
  int iFact = 1;
  for(i=iNo;i>=1;i--)
  {
    iFact = iFact*i;
  }
  return iFact;
}