#include<stdio.h>
int CapLen(char[]);
int main()
{
  char Arr[30];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  iRet = CapLen(Arr);
  
  printf("Number of capital letters are %d\n",iRet);
  
  return 0;
}
int CapLen(char str[])
{
 int i = 0;
 int iCnt = 0;
 
 while(str[i]!='\0')
 {
   if((str[i]>='A') && (str[i]<='Z'))
   {
     iCnt++;
   }
   i++;
 }
 return iCnt;
}