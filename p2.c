///////////////////////////////////////////////////////////
// Given two sorted arrays, find their intersection.
///////////////////////////////////////////////////////////

#include<stdio.h>
void Intersection(int[],int[],int,int);
int main()
{
 int iNo1 = 0;
 int iNo2 = 0;
 int Arr[iNo1];
 int Brr[iNo2];
 int i = 0;
 
 printf("Enter size for first array\n");
 scanf("%d",&iNo1);
 
 printf("Enter %d elements for first array\n",iNo1);
 
 for(i=0;i<iNo1;i++)
 {
   scanf("%d",&Arr[i]);
 }
 
 printf("Enter size for second array\n");
 scanf("%d",&iNo2);
 
 printf("Enter %d elements for second array\n",iNo2);
 
 for(i=0;i<iNo2;i++)
 {
   scanf("%d",&Brr[i]);
 }
 
 Intersection(Arr,Brr,iNo1,iNo2);
 
 return 0;
}
void Intersection(int Crr[],int Drr[],int iSize1,int iSize2)
{
 int j = 0;
 int k = 0;
 
 for(j=0;j<iSize1;j++)
 {
   for(k=0;k<iSize2;k++)
   {
     if(Crr[j]==Drr[k])
	 {
	   printf("%d\t",Crr[j]);
	 }
   }
 }
 
}