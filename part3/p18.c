#include<stdio.h>
void main()
{
        int i,j,n,k,c=0;
        char a=65,b=65;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {         
		for(k=0;k<=n-i;k++)
		{     
			for(j=1;j<=n-c;j++)
                	{
                        	printf("%c",b);
                        	b++;
                	}
			++c;
			b=++a;
		}
               		printf("\n");
			b=65;
			a=65;
			c=0;
		
                

        }
}

