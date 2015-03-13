#include<stdio.h>

main()
{
	int i,j;
	
	for(i=0;i<5;i++)
		{
		for(j=0;j<4-i;j++)
			printf("  ");
		for(j=0;j<=i;j++)
			printf("%d ",j+1);
		for(j=i;j>0;j--)
			printf("%d ",j);
		printf("\n");
		}

