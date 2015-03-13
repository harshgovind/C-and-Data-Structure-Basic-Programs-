#include<stdio.h>
void main()
        {
	char ch;
        ch='A';
     int i,j;
      for(j=6;j>=0;j--)
        {

        for( i=1;i<2*(6-j);i++)
          {
            
             putchar(ch+i-2);
			
          }
	ch+=1;
             printf("\n");


          }
}

