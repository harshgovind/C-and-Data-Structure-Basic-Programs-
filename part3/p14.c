#include<stdio.h>
void main()
{
        int i,j,n,l,c=2;
        char a,b=65;
       

        printf("Enter The Number of sets: ");
        scanf("%d",&n);
	b=b+n+14;
        for(i=0;i<=n-1;i++)
        {
		

                a=b;
                for(j=0;j<=i;j++)
                {
                        printf("%c",a);
                        a++;
                }
		
		printf("\n");
		b=a-c-1;
		c=c+2;
		
               
                

        }
}

