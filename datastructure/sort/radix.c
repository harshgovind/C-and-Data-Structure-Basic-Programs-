#include<stdio.h>
void main()
{
	int a[100],b[100],i,j,n,c,d,k,temp,l;
	printf("Enter the maximum 3 digit number");
	printf("Enter the no. of element:");
	scanf("%d",&n);
	printf("Enter element:");
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("ur element is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(l=1;l<40)
	for(i=0;i<n;i++)
	{
		c=a[i]%10;
		b[i]=c;
	}
	 for(i=0;i<n-1;i++)
        {
        for(j=i+1;j<=i+1;j++)
        {
                c=j;
                while(c!=0)
                {

                        if(b[c-1]>b[c])
                        {
                                temp=b[c-1];
                                b[c-1]=b[c];
                                b[c]=temp;
                        }
                        --c;
                        printf("\n");
                        /*for(k=0;k<n;k++)
                        {
                                printf("%d\t",a[k]);
                        }*/
                }
        }
	}
	printf("\n");	

	 for(i=0;i<n;i++)
        {
                printf("%d\t",b[i]);
        }

}
