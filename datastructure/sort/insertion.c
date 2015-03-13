#include<stdio.h>
void main()
{
	int i,j,a[100],n,temp,k,b;
	printf("Enter total numbers:");
	scanf("%d",&n);
	printf("Enter element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("ur element=%d\t",a[i]);
	}
	printf("\n");

	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<=i+1;j++)
	{
		b=j;
		while(b!=0)
		{
				
			if(a[b-1]>a[b])
			{
				temp=a[b-1];
				a[b-1]=a[b];
				a[b]=temp;
			}
			--b;
			printf("\n");
			for(k=0;k<n;k++)
			{
				printf("%d\t",a[k]);
			}
		}
	}
}
}
