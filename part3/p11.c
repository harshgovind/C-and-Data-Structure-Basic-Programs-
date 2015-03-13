#include<stdio.h>
void main()
{
        int i,j,n,l,c=-1;
        char a,b=65;
       

        printf("Enter The Number of sets: ");
        scanf("%d",&n);
	b=b+n+5;
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
                        a--;
                }
		a=a+c;
		printf("\n");
		b=a;
		++c;
               
                

        }
}

