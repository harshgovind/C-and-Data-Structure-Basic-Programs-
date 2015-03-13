/*Write a program to encrypt / decrypt a file using bit wise operator XOR (^).*/


#include<stdio.h>

main()
{

int  key=1;
FILE *fp1,*fp2,*fp3;
char ch,ch1,ch2;
if((fp1=fopen("file1.dat","rw"))==NULL)

printf("\n error");
if((fp2=fopen("file2.dat","rw"))==NULL)
printf("\n Error");

if((fp3=fopen("file3.dat","w"))==NULL)
printf("\n Error");
while(!feof(fp1))
	{
	ch=getc(fp1);
	ch1=ch^key;
	putc(ch1,fp2);

	}

while(!feof(fp2))
{

ch1=getc(fp2);
ch2=ch1^key;
putc(ch2,fp3);
}

fclose(fp3);
fclose(fp2);
fclose(fp1);
}

