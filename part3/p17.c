#include<stdio.h>
void main()
{
        int i,j,n,c=1,k;
        char a=65,b=65;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n-1;i++)
        {
                
		for(k=0;k<i;k++)
		{
			c=c*2;
		}
                for(j=1;j<=c;j++)
                {
                        printf("%c",a);
                        a++;
                }
		a=++b;
		c=1;
               printf("\n");
                

        }
}
