/* Write a program that will read a line and delete from it all occurrences of the word
‘the’.
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
        int i,j,n,m,len,len1,b;
        char a[40],str[100],temp[40];
       
       
        printf("Enter lines=\n");
        
              __fpurge(stdin);
                gets(str);

                printf("\nEnter the world:");
        gets(a);
        printf("Your word is=%s\n",a);
         printf("Your word containing strings are:\n");

         
                  m=strlen(str);
                len=0;
                for(;len<=m;)
                {
                sscanf(str+len,"%s",temp);
		len1=len;
               	len=strlen(temp)+len+1;
                if(strlen(temp)==strlen(a))
                {
                        b=strcmp(temp,a);
                        if(b==0)
                        {
			for(j=0;j<strlen(a);j++)
				{				 
					str[len1+j]=' ';
				}
                       
                        }
                }
                }
//		puts(str);


              for(i=0;str[i]!='\0';i++)
        	{
                if(str[i]=='\t')
                {
                   str[i]=32;
                }
		}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
		{	
			for(j=i;str[j]!='\0';j++)
				{	
				str[j]=str[j+1];
				

				}
		--i;
		}


	}	
	puts(str);

        
}

