/*Write program to print the location of biggest digit form beginning.*/
#include<stdio.h>

main()
{

int num,k=0,i,count=0,count1=0,c=0;
printf("\n Enter The Number::");
scanf("%d",&num);
while(num)
{
i=num%10;
num=num/10;
if(k<i)
        {   
                k=i;
                count1++;
                count1=count1+count;
                count=0;
		
        }   
else
        count++;
	c++;
}
printf("\n Biggest number=%d found from beginning at location =%d",k,(c-count1+1));
}
	
