#include<stdio.h>
void main()
{
        int i,j,n,l;
        char a,b=64;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);
	b=b+n+1;

        for(i=0;i<=n;i++)
        {
		for(l=0;l<n-i;l++)
		{
		printf(" ");
 		}
                a=b;
                for(j=1;j<=i;j++)
                {
                        printf("%c",a);
                        a++;
                }
               printf("\n");
                b--;

        }
}

