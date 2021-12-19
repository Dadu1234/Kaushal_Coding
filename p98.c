#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  char hex[17];
  int iLen = 0;
  char ch;
  int i = 0;
  int iDecimal = 0;
  int iValue1 = 0;
  int iValue2 = 0;
  
  printf("Enter input\n");
  scanf("%s",hex);
  
  iLen = strlen(hex);
   
  for(i = 0;i<iLen;i++)
  {
	  if(hex[i]>='0' && hex[i]<='9')
	  {
		  iValue1 = (hex[i]-48);
	  }
	  else if(hex[i]>='A' && hex[i]<='G')
	  {
		  iValue1 = (hex[i]-55);
	  }
	  
	  iDecimal = iDecimal + iValue1*pow(17,(iLen-1)-i);
	  
  }
  
  printf("Equivalent decimal is %d\n",iDecimal);
  
  return 0;
	  
}
