#include<stdio.h>
void main()

{

	int a[100][100],i,j,c,n,l;
	printf("Enter how many lines do you want");
	scanf("%d",&n);
	a[0][1]=1;
	for(l=0;l<n;l++)
	{
		printf(" ");
	}
	printf("%d",a[0][1]);
	printf("\n");
	a[1][1]=1;a[1][2]=1;
	for(l=0;l<n-1;l++)
	{
		printf(" ");
	}
	printf("%d %d",a[1][1],a[1][2]);
	printf("\n");
	a[2][1]=1;a[2][2]=2;a[2][3]=1;
	for(l=0;l<n-2;l++)
	{
		printf(" ");
	}
	printf("%d %d %d",a[2][1],a[2][2],a[2][3]);
	printf("\n");
	for(i=3;i<=n;i++)
	{
		a[i][1]=1;
		for(l=0;l<n-i;l++)
		{
			printf(" ");
		}
		printf("%d",a[i][1]);
		j=2;c=3;
		while(j<=i)
		{
			a[i][j]=a[i-1][c-1]+a[i-1][c-2];
			printf(" %d",a[i][j]);
			c++;
			j++;
		}
		a[i][j]=1;
		printf(" %d",a[i][j]);
		printf("\n");
	}
}
