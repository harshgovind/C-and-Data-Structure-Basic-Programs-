/*Write a function to get the transpose of a matrix.*/
#include<stdio.h>
void main()
{
	int a[10][10],t[10][10],m,n,i,j,i1,j1,i2,j2;
	printf("Enter no of rows and columns of matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of matrix A:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
		printf("Given matrix is=\n");
	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                printf("%4d",a[i][j]);
                }
		printf("\n");
        }

	for(i1=0;i1<n;i1++)
	{
		for(j1=0;j1<m;j1++)
		{
		t[i1][j1]=a[j1][i1];
		}
	}

	printf("The transpose Matrix is:\n");
	 for(i2=0;i2<n;i2++)
        {
                for(j2=0;j2<m;j2++)
                {
               printf("%4d",t[i2][j2]);
                }
		printf("\n");
        }
}
