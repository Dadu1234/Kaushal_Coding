///////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept two string from users and concatenate the contents of 1st string at the end of second string
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrConcatenate(char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  
  printf("Enter first string\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter second string\n");
  scanf("% [^'\n']s",Brr);
  
  StrConcatenate(Arr,Brr);
  
  printf("String after concatenation is %s\n",Brr);
  
  return 0;
}
void StrConcatenate(char *src,char *des)
{
  while(*des!='\0')
  {
    des++;
  }
  while(*src!='\0')
  {
    *des = *src;
     src++;
	 des++;
  }
  *des = '\0';
}
  