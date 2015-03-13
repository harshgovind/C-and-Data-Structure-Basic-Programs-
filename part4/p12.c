/*Write a program to read n number of strings using two-dimensional character array,
sort them and display the sorted list of strings on the screen.
*/
#include<stdio.h>
#include<string.h>

void main()
{
        char a[50][50],temp[50];
       
        int i,j,n;
        printf("Enter The Number of Names: ");
        scanf("%d",&n);
        printf("Enter The Names to be sorted:\n ");
        for(i=0;i<n;i++)
        {
                
                scanf("%s",a[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(strcmp(a[i],a[j])>0)
                        {
                                strcpy(temp,a[j]);
                                strcpy(a[j],a[i]);
                                strcpy(a[i],temp);
                        }

                }
        }

        for(i=0;i<n;i++)
        {
                printf("\n%d.",(i+1));
                printf("%s",a[i]);
        }

}

