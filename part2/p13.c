/*Write program, which reads a number and finds its first even digit. [ one loop ]*/
#include<stdio.h>
void main()
{
	int a,b,c,d=1;
    	printf("Enter a:");
	scanf("%d",&a);
	do
	{
		c=a%10;
		a=a/10;
		if(c%2==0)
			d=c;	
	}while(a!=0);
	if(d!=1)
	printf("First even digit is=%d",d);
	else
	printf("NO EVEN DIGIT");
}
