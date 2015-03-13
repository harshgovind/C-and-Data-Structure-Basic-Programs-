/*Write a program to copy the contents of one array into another in the reverse order.*/
#include<stdio.h>
int main()
{
int a[5],b[5],i;

printf("\n Enter Array Element::");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
{
b[4-i]=a[i];
}

printf("\n  Reverse Array Element::");
for(i=0;i<5;i++)
printf("%d ",b[i]);
}

