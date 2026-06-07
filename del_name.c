#include"header.h"
void del_name(ST **ptr)
{
        char op,a[20];int c=0;
        printf("Enter Name: ");
        scanf("%s",a);
        ST *prev,*temp=*ptr,*c1=*ptr;
	
                        printf("+-----------+---------------------------+---------------+\n");
                        printf("| ROLL-NO   | STUDENT NAME              | PERCENTAGE    |\n");
                        printf("+-----------+---------------------------+---------------+\n");
	while(c1!=0){
		if((strcmp(a,c1->name))==0){
                        printf("| %-9d | %-25s | %-13.2f |\n",c1->roll,c1->name,c1->marks);
			c++;
		}
		c1=c1->next;
	}
                        printf("+-----------+---------------------------+---------------+\n");
	if(c==0){
	 puts("Record Not found\n");
	 return;
	}
	else if(c>1){
	puts("Multiple records found.\n");
	del_roll(ptr);
	return;
	}
	else if(c==1){
           while(temp!=0)
           {
                if((strcmp(a,temp->name))==0)
                {
                        printf("Are you sure you want to delete this record? (y/n): ");
                        scanf(" %c",&op);
                        if(op=='y'){
                           if(*ptr==temp)
                           *ptr=temp->next;
                           else
                           prev->next=temp->next;
                           free(temp);
                           puts("Record Deleted Successfully");
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
       }
}
