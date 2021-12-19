/////////////Find length of string without predefined function///////////////

#include<stdio.h>
int StrLen(char[]);
int main()
{
 int iRet = 0;
 char Arr[30];
 
 printf("Enter a string\n");
 scanf("%s",Arr);
 
 iRet = StrLen(Arr);
 
 printf("Length of string is %d\n",iRet);
}
int StrLen(char str[])
{
 int iCnt = 0;
 int i =0;
 while(str[i]!='\0')
 {
   iCnt++;
   i++;
 }
 return iCnt;
}