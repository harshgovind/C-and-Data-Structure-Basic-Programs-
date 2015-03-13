#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		printf(" ");
	
		for(k=0;k<=j;k++)
		{
			printf("%d",1+i);
			printf(" ");
		}
	
		printf("\n");
	}
	
}
