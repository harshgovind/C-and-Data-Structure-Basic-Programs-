/*Write a program to remove all the comments from a ‘C’ program.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*fp1;
	int k,i,j;
	char ch,a[100];
	
	fp=fopen("pushkar.c","r");
        
	if(fp== NULL)
		printf("no such file is exist");
	else
		{
		while(!feof(fp))
		{
		for(i=0;!feof(fp);i++)
			a[i]=fgetc(fp);
		
         	}
		k=strlen(a);
		for(i=0;i<=k;i++)
		{
			if(a[i]=='/')
				{
					if(a[i+1]=='/')
					{
						for(j=i;a[j]!='\n';j++)
						a[j]=' ';
					}
					else if(a[i+1]=='*')
					{
							a[i]=' ';
							a[i+1]=' ';
						for(j=i+2;a[j]!='*'&&a[j+1]!='/';j++)	
							a[j]=' ';
							a[j]=' ';
							a[j+1]=' ';
					}				
					
				}
				
		}
	puts(a);
	printf("%d",k);
	fclose(fp);
}
	fp1=fopen("pushkar.c","w");
	if(fp1== NULL)
                printf("no such file is exist");
        
else
		for(i=0;i<=k;i++)
		{
			fprintf(fp1,"%c",a[i]);
		}
		fclose(fp1);
}
