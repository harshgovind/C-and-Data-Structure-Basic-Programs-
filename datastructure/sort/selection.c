#include<stdio.h>
void main()
{
	int i,j,n,a[100],temp,k;
	printf("Enter total of numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("ur no.");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
	
		
		}
	}	
		printf("\nSorted list:");
        	for(k=0;k<n;k++)
        	{
                	printf("\t%d",a[k]);
        	}
		
	

			
}
