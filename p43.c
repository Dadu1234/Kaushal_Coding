/////////////////////////////////////////////////////////////////////////////////
// WAP TO COPY STRING FROM ONE TRING INTO ANOTHER
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrcpyX(char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  
  printf("Enter first string\n");
  scanf("%[^'\n']s",Arr);
  
  StrcpyX(Arr,Brr);
  
  printf("String after copy is %s\n",Brr);
  
  return 0;
}
void StrcpyX(char src[],char des[])
{
  int i = 0;
  
  while(src[i]!='\0')
  {
    des[i] = src[i];
    i++;
  }
  des[i] = '\0';
}
