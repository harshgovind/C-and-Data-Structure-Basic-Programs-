/*Write program, which reads a number Let ‘t’ be its smallest factor. Find smallest factor of
t+2. e.g. input 77 output 3 ( since t = 7).*/
#include<stdio.h>
void main()
{
	int i,j,num,sum=0,small,a[100],n=0;
	printf("Enter any number=");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if((num%i)==0)
		{
 			a[n]=i;
			n++;
		}
	}
	small=a[0]+2;
	for(j=2;j<=small;j++)
	{
		if((small%j)==0)
			break;	
		
	}
	printf("%d",j);
	
	
	
}	
