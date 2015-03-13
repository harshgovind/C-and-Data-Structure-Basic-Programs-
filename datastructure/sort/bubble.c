#include<stdio.h>
void main()
{
	int i,j,n,a[100],temp;
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
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted list:");
        for(i=0;i<n;i++)
        {
                printf("\t%d",a[i]);
        }

			
}
