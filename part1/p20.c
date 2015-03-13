/*Write program to print the biggest digit and its location( from last). e.g. in 23176 biggest
digit is 7 and its location is 2 from last.*/
#include<stdio.h>

main()
{

int num,k=0,i,count=0,count1=0;
printf("\n Enter The Number::");
scanf("%d",&num);
while(num)
{
i=num%10;
num=num/10;
if(k<i)
	{
		k=i;
		count1++;
		count1=count1+count;
		count=0;
	}
else
	count++;
}
printf("\n Biggest number=%d found from last at location =%d",k,count1);
}


