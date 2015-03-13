/*Develop a program to add and multiply two matrices*/
#include<stdio.h>
void main()
{
	int a1[10][10],a2[10][10],a3[10][10],i,j,k,r1,c1,r2,c2,i1,j1,m,n,p,q,a4[10][10],sum,i2,j2,prod,i3;
	printf("Enter the order of(mxn) matrix A =");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the element of %d x %d matrix\n",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("Elements of matrix A=\n");
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%3d",a1[i][j]);
                }
        printf("\n");
        }
	 printf("\nEnter the order of matrix B =");
        scanf("%d %d",&r2,&c2);
        printf("\nEnterr the element of %d x %d matrix\n",r2,c2);
        for(m=0;m<r2;m++)
        {
                for(n=0;n<c2;n++)
                {
                        scanf("%d",&a2[m][n]);
                }
        }
        printf("Elements of matrix B=\n");
        for(m=0;m<r2;m++)
       {
                for(n=0;n<c2;n++)
                {
                        printf("%3d",a2[m][n]);
                }
		printf("\n");
	}
     
        	if(r1==r2 && c1==c2)
		{
			printf("\nAddition of matrix A and B is=\n");
			for(i1=0;i1<r1;i1++)
			{
				for(j1=0;j1<c1;j1++)
				{
					a3[i1][j1]=a1[i1][j1]+a2[i1][j1];
					printf("%3d",a3[i1][j1]);
				}
				printf("\n");
			}
		}

	else
		{
		printf("Addition is not possible.");
		}
	printf("\n");
	
	if(c1==r2)
	{
	printf("\nMultiplication oa matrix A and B is=\n\n");
	for(i3=0;i3<r1;i3++)
		{
			for(i2=0;i2<c2;i2++)
			{
				sum=0;
				for(j2=0;j2<r2;j2++)
				{
					prod=a1[i3][j2]*a2[j2][i2];
					sum=sum+prod;
					a4[i3][i2]=sum;
				}
				printf("%5d",a4[i3][i2]);
				
			}
		printf("\n");
		
	}	
	}
	else
		printf("\nMutiplication is not possible");
}

