#include<stdio.h>
void main()
{
        int i,j,n;
        char a,b=64;
        

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {
                a=b;
                for(j=1;j<=i;j++)
                {
                        printf("%c",a);
                        a++;
                }
               printf("\n");
                b++;

        }
}

