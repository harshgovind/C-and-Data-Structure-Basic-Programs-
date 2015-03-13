/*Read a number and delete the maximum digit. Assume that all digits in the number are
distinct. e.g. input 237436 output 23436.*/
#include<stdio.h>
void main()
{
	int i,j,n,a[100],x=0,max,b;
	a[0]=0;
	printf("Enter any number=");
	scanf("%d",&n);
	
        do
	{
		b=n%10;
		n=n/10;
		a[x]=b;
		x++;
			
	}while(n!=0);
	max=a[0];
	for(i=1;i<x;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d\n",max);
	for(j=x-1;j>=0;j--)
	{
		if(max!=a[j])
		{
			printf("%d",a[j]);
		}
	}
}
	
