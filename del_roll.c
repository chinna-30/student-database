#include"header.h"
void del_roll(ST **ptr)
{

        int n=disp_roll(*ptr);char op;
        ST *prev,*temp=*ptr;
        while(temp!=0)
        {
                if(temp->roll==n){
			 printf("\n");
                	printf("Are you sure you want to delete this record? (y/n): ");
                	scanf(" %c",&op);
                	if(op=='y'){
                           if(*ptr==temp)
                           *ptr=temp->next;
                           else
                           prev->next=temp->next;
			   free(temp);
			   puts("Record Deleted Successfully\n");
			   return;}
			else
			return;
                }
                else
                {
                        prev=temp;
                        temp=temp->next;
                }
	}
	puts("Record Not found\n");
}
