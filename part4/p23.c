/*Write a program that takes a set of names of individuals and abbreviates the first,
middle and other names except the last name by their first letter.
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char a[200],b[20];
	int i,j=0;
	printf("Enter the string:");
	gets(a);
	  for(i=0;a[i]!='\0';i++)
        {
                if(a[i]=='\t')
                {
                   a[i]=32;
              }
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ' && a[i+1]==' ')
		{	
			for(j=i;a[j]!='\0';j++)
				{	
				a[j]=a[j+1];
				}
		--i;
		}
	}           
	puts(a);
        int k=strlen(a);
	printf("%d\n",k);
	printf("%c",a[0]);
        int l;
	for(i=0;a[i]!='\0';i++)
        {
	       int  n=0;
                if(a[i]==' ')
                { printf(" ");
                  b[n]=a[i+1];
		  printf("%c",b[n]);
		  n++;
		l=i;
	       }
		
		
	}
	for(i=l+2;a[i]!='\0';i++)
           printf("%c",a[i]);
}

