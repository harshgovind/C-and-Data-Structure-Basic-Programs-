/*Write a program which reads 4 numbers and prints them in reverse order. Exa- input 4, 2, 3,
7 the output 7, 3, 2, 4*/
#include<stdio.h>
void main()
{
	int n[4],j,i;
	printf("Enter any four numbers=");
	for(i=0;i<=3;i++)
	{
	scanf("%d",&n[i]);
	}
	for(j=0;j<=3;j++)
	{	
		printf("%d",n[(3-j)]);
		printf("\n");
	}
}

