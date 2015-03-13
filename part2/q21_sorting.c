/*Write a program to sort all the elements of 4 by 4 matrix.*/

#include<stdio.h>
main()
{
	int a[4][4],i,j,k;
	int *p,*q;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	p=&a[0][0];
	for(i=0;i<15;i++)
	{
	q=p;
		for(j=i+1;j<16;j++)
		{	
			q++;	
			if(*p>*q)
				{
				k=*p;
				*p=*q;
				*q=k;
				}
	}
	p++;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%7d",a[i][j]);
		}
		printf("\n\n");
	}
}

