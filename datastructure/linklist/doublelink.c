#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};





int length(struct node *p)
{
        int count=0;
        while(p!=NULL)
        {
                count++;
                p=p->next;
        }
        return(count);
}

void insert(struct node **p, struct node **q, int n)
{
	struct node *temp;
	if(*p==NULL)
	{
		*p=(struct node *)malloc(sizeof(struct node));
		if(*p==NULL)
		{
			printf("ERROR\n");
			exit(0);
		}
		(*p)->data=n;
		(*p)->prev=NULL;
		(*p)->next=NULL;
		(*q)=*p;
	}
	else
	{
		 
		
			temp=(struct node*)malloc(sizeof(struct node));
			if(temp==NULL)
			{
				printf("ERROR\n");
				exit(0);
			}
			temp->data=n;
			temp->prev=(*q);
			temp->next=NULL;
			(*q)->next=temp;
			(*q)=temp;
	}
}

void delete(struct node **p, int node_no,int count)
{
	struct node *prev1=NULL;
	int i;
	struct node *temp;
	temp=*p;

	if(*p==NULL)
	{
		printf("list is empty");
		
	}
	
	else
	{
		if(node_no>count)
		{
			printf("Error");
			
		}
		else
		{
			if(node_no==1)
			{
				temp=*p;
				(*p)=temp->next;
				(*p)->prev=NULL;
				free(temp);
			}
			else
			{	
				temp=*p;
				i=1;
				while(i<node_no)
				{
					prev1=temp;
					temp=temp->next;
					i=i+1;
				}
			
				prev1->next=temp->next;
				if(temp->next!=NULL)
					temp->next->prev=prev1;
				free(temp);
			}
		}
	}
}
/*
void newinsert(struct node **p, int node_no, int value, int count)
{
        struct node *prev=NULL, *curr=NULL;
        int i;
        struct node *temp1;
        if(*p==NULL)
        {
                printf("list is empty");

        }

        else
        {
                if(node_no>count)
                {
                        printf("Error");

                }
                else
                {
                        prev=NULL;
                        curr=*p;
                        i=1;
                        while(i<node_no)
                        {
                                prev=curr;
                                curr=curr->link;
                                i=i+1;
                        }
                        if(prev==NULL)
                        {
				temp1=(struct node*)malloc(sizeof(struct node));
				temp1->data=value;
                                temp1->link=curr;
                                
                        }
                        else
                        {
				temp1=(struct node*)malloc(sizeof(struct node));
                                temp1->data=value;
				temp1->link=curr;
                                prev->link=temp1;
				
                        }
                }
        }
}
void reverse(struct node **p)
{
	struct node *temp1,*temp2,*temp3;
	temp1=*p;
	temp2=NULL;
	while(temp1!=NULL)
	{
		temp3=temp2;
		temp2=temp1;
		temp1=temp1->link;
		temp2->link=temp3;
	}
	*p=temp2;
}*/	
void printlist(struct node **p)
{
	struct node *temp;
	temp=*p;
	printf("values are=\n");
	if(*p!=NULL)
	{
		do
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}while(temp!=NULL);
	}
	else
		printf("empty\n");
}
void main()
{
	int n,x,a,flag=0,count=0,c,b;
	
	struct node *start=NULL;
	struct node *end=NULL;
	for(;flag==0;)
	{
	printf("\n1)create\n2)delete\n3)print\n4)insert now node\n5)exit\n6)Reverse\n");
	printf("Enter your choice=");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
		{
			printf("Enter the nodes to be created \n");
        		scanf("%d",&n);
        		while ( n -- > 0 )
        		{
	   			printf( "Enter the data values to be placed in a node\n");
           			scanf("%d",&x);
           			 insert ( &start,&end, x );
        		}
		}
		break;	
		case 2:
		{
			count=length(start);
			printf("Enter the node number which is to delete:");
			scanf("%d",&n);
			delete(&start,n,count);
		}
		break;
		case 3:
		{
			printf("created list is=");
			printlist(&start);
		}
		break;
		/*case 4:
		{
			count = length(start);
			printf("Enter the node nuber where you want to insert a node:");
			scanf("%d",&c);
			printf("Enter the value:");
			scanf("%d",&b);
			newinsert(&start,c,b,count);
		}
		break;
		*/
		case 5:
		{
			flag=1;
		}
		break;
		/*case 6:
		{	
			printf("Reverse list=");
			reverse(&start);
		}
		break;*/
		default:
			printf("Enter the wrong choice");
	}
	}
}

