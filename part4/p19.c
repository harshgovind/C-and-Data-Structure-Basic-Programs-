/* Write a program that replaces two or more consecutive blanks in a string by a single
blank. For example, if the input is
Grim     return       to the        planet        of    apes!!
the output should be
Grim return to the planet of apes!!
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char a[200];
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
}
