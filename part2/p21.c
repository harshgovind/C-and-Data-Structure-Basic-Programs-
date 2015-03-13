#include<stdio.h>
void main()
{

	int rc_sum[10],matrix[5][5],rowcol,i,j,k=0,flag=1,temp,sum;
	printf("Enter the number of rows or col of square:");
	scanf("%d",&rowcol);
	printf("Enter the matrix:\n");
	for(i=0;i<rowcol;i++)
	{
		for(j=0;j<rowcol;j++)
		{
		scanf("%d",&matrix[i][j]);
		}
	printf("\n");

       }
	for(i=0;i<rowcol;i++)      //row sum
	{
		 sum=0;
		for(j=0;j<rowcol;j++)
		{
			sum=sum+matrix[i][j];
		}
		rc_sum[k]=sum;
		k++;
	}
	for(i=0;i<rowcol;i++)       //col sum
	{
		 sum=0;
		for(j=0;j<rowcol;j++)
		{
			sum=sum+matrix[j][i];
		}
		rc_sum[k]=sum;
		k++;
	}
	temp=rc_sum[0];
	flag=1;
	for(i=0;i<(rowcol*2);i++)
	{
		if(rc_sum[i]!=temp)
		{
			flag=0;
			break;
		}
		else
			continue;
	}
	 if(flag==1)
	printf("\nThe matrix is a magic square.");
	  else
	printf("\nThe matrix is not a magic square.");
}
