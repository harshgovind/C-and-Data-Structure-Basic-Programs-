#include<stdio.h>
void main()
{
        int i,j,n,k,l;
        char a=65,b=65;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {
               for(j=1;j<=n-i;j++)
                {
			for(k=0;k<=i;k++)
			{
                        	printf("%c",b);
			}
                       	b++;

                }
               printf("\n");
		b=++a;
		
                

        }
}

