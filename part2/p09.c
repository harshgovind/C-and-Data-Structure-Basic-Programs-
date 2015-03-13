/*Write program, which reads n and n pair of numbers. The program finds product of every
pair. Then their sum is calculated. If n=4 and pairs are (3, 2) (6, 3) (2, 6) (4, 3) then output is
3*2 + 6*3 + 2*6 + 4*3 = 48.*/
#include<stdio.h>
void main()
{
	int a[100],b[100],i,j,sum=0,prod,n;
	printf("Enter the number of pair,n=");
	scanf("%d",&n);
	 printf("Enter the %d number of elements:\n",2*n);

	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		prod=a[i]*b[i];
		sum=sum+prod;
	}


	printf("sum=%d",sum);
}
	
