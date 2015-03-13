#include<stdio.h>
#include<string.h>
void E_D(char key='a')
{
   char str[100],str1[100],E_chr,j,file_name[30];
   FILE *ptr;
   int len,i,flag;
   printf("\nEnter the name of the file:");
	     scanf("%s",file_name);

	     ptr=fopen(file_name,"r+");
	     i=0;
   for(;!feof(ptr);)
   {
     fscanf(ptr,"%c",&str[i]);
     i++;
   }

    len =strlen(str);
    printf("%d \n",len);
    fclose(ptr);
    for(j=0;j<len;j++)           //Encrpytion
   {
     str1[j]=(str[j]^key);
   }
   ptr=fopen(file_name,"w");


   for(j=0;j<len;j++)    //writing encrypted string to file
   {
   fprintf(ptr,"%c",str1[j]);
   }
   fclose(ptr);
 //	     break ;


}
void main()
{
  int option,fnc_suc,len,i,flag,E_flag=0;
  char file_name[30],file_data[100],str[100],str1[100],key='a',E_chr,j;
  FILE *ptr;
  for(;E_flag!=1;)
  {
  printf("\n______________MENU_______________");
  printf("\n1.Create a new file.");
  printf("\n2.Veiw the file.");
  printf("\n3.Encrpyt a file.");
  printf("\n4.Decrpyt a file.");
  printf("\n5.Exit.");
  printf("\n__________________________________");

  printf("\nEnter the number of option you want to perform:");
  scanf("%d",&option);


  switch(option)
  {

    case 1:
	    printf("\n_______CREATE A FILE________");
	    printf("Enter the name of the file:");
	    scanf("%s",file_name);
	    ptr = fopen(file_name,"w+");
	    printf("\nEnter the data you want to enter in the file.End with *");
	    printf("\n_____________________________________________");
	    for(i=0;i<100;i++)
	    {
	       scanf("%c",&file_data[i]);
	       if(file_data[i]=='*')
	       break;
	    }
	    printf("\n_____________________________________________");
	    len = strlen(file_data);
	    for(i=0;i<len;i++)
	    {
		if(file_data[i]!='*')
		fnc_suc=fputc(file_data[i],ptr);
		(fnc_suc==EOF)?flag=0:flag=1;
	    }

	    if(flag==1)
	    printf("\nData was sucessfully written to the file.");

	    else
	      printf("\nData was not sucessfully written to the file.");
	    fclose(ptr);
	    break;

      case 2:
	     printf("\n_________VEIW A FILE_______");
	     printf("\nEnter the name of the file:");
	     scanf("%s",file_name);
	     ptr=fopen(file_name,"r");
	     printf("\n____________FILE DATA_______");
	     for(;!feof(ptr);)
		 printf("%c",fgetc(ptr));
	     printf("\n______________________________");
	     fclose(ptr);
	     break;
      case 3:

		E_D(key);
		break;
      case 4:
		E_D(key);
		break;
     case 5:
	    E_flag=1;


   }
   }
}






