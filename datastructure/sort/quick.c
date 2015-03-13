#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0,temp,j,a[100],n,b[100];
	printf("Enter the total number of element:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ur list is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i*=2)
	{
		for(j=1;j<n;j++)
		{
			if(a[j]>=a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			j++;
		}
		i++;
	}
	for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }

	
}
