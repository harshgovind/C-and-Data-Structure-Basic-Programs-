#include<stdio.h>
void main()
{
        int i,j,n;
        char a,b=65;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {
                
                for(j=1;j<=i;j++)
                {
                        printf("%c",b);
                        b++;
                }
               printf("\n");
                

        }
}

