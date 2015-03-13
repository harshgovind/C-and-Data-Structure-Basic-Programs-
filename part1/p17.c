/*Find the smallest number in an array using pointers.*/
#include<stdio.h>

void main()
{

int a[5],*p,i,temp;
p=a;
printf("\n Enter Array Element::");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

temp=*p;
p++;
for(i=0;i<4;i++)
	{
	if(*p<temp)
		temp=*p;
	p++;	
	}
printf("\nSmallest No Is=%d",temp);

}
