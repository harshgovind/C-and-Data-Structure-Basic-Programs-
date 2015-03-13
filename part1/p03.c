/*Write a program, which will delete only odd numbers from a array of integers.*/
#include<stdio.h>
void main()
{
	int a[100],i,n,j;
	printf("Enter total number of elements in an array:");
	scanf("%d",&n);
	printf("Enter %d numbers\n",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nsorted array is:");
	for(j=0;j<=n-1;j++)
	{
		if(a[j]%2!=0)
		continue;
		printf(" %3d",a[j]);
	}
}
