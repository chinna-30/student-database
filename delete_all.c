#include"header.h"
void delete_all(ST **ptr)
{
	char op;
	if(*ptr==0){
		puts("No student records available in the file.\n");return;
	}
	puts("Are you sure you want to delete all the student records? (y/n): ");
	scanf(" %c",&op);
	if(op=='y'){
		ST *temp;
	    while(*ptr!=0)
	    {
		temp=*ptr;
		*ptr=(*ptr)->next;
		free(temp);
	    } 
		 FILE *fp =fopen("studentdata.txt","w");
            fp=fopen("database.txt","w");
            fclose(fp);
	    puts("All the studen Record deleted Successfully");
	    i=1;
	}

}
