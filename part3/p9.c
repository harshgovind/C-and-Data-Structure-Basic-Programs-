#include<stdio.h>
void main()
{
        int i,j,n,l;
        char a = 'a',b='B',c=b;

        printf("Enter The Number of sets: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {
                for(j=0;j<=i;j++)
                {
                        printf("%c",a);
                        a++;
                }
		for(l=n;l>i+0;l--)
		{
			printf("%c",c);
			c++;
		}

                printf("\n");
                a= 'a';
		c=b++;
        }
}

