/*Write a program that will open a file and report on the number of lines, characters,
and words in a file. Have the name of the file to be opened appear as a command line
argument.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int k,i,j,count=1,cnt=1,word=1,wd=1;
	char ch,a[60000];
	
	fp=fopen(argv[1],"r");
        
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
		
		for(i=0;i<k;i++)
		{
			if(a[i]>='A' && a[i]<='z')
			count++;
		}
		 for(j=0;j<k;j++)
                {
                        if(a[j]=='\n')
                        cnt++;
                }
		 for(i=0;i<k;i++)
                {
                        if(a[i]==' ' && (a[i+1]>='A' && a[i+1]<='z'))
                        wd++;
                }
		puts(a);
		printf("No. of char.s=%d\n",count);
		printf("No. of words=%d\n",wd);
		printf("No. of lines=%d\n",cnt);
		fclose(fp);
		}

}
