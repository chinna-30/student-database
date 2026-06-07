#include"header.h"
void mod_roll(ST *ptr);
void mod_name(ST *ptr);
void modify(ST *ptr)
{
	if(ptr==0){
        puts("File is empty. No records to modify.\n");
        return;
	}

 char op;
        printf("+---------------------------------------------------------+\n");
        printf("|      R/r :Enter Rollno to search for student updatation |\n");
        printf("+---------------------------------------------------------+\n");
        printf("|      N/n :Enter name to search for student updatation   |\n");
        printf("+---------------------------------------------------------+\n");
        printf("       Enter your choice : ");
        scanf(" %c",&op);
        switch(op|32)
        {

                case 'r':mod_roll(ptr);break;
                case 'n':mod_name(ptr);break;
                default:printf("Invalid choice\n");return;
        }	
}

void mod_name(ST *ptr)
{

	 char op,a[20];int c=0;
        printf("Enter Name: ");
        scanf("%s",a);
        ST *temp=ptr,*c1=ptr;

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
        mod_roll(ptr);
        return;
        }
        else if(c==1){
           while(temp!=0)
           {
                if((strcmp(a,temp->name))==0)
                {
                        printf("Are you sure you want to modify this record? (y/n): ");
                        scanf(" %c",&op);
                        if(op=='y'){
                            int x;
        printf("+-------------------------------------+\n");
        printf("|      Select the field to modify:    |\n");
        printf("+-------------------------------------+\n");
        printf("|      1.NAME                         |\n");
        printf("+      2.PERCENTAGE                   +\n");
        printf("|      3.BOTH                         |\n");
        printf("+-------------------------------------+\n");
        printf("Enter your choice: ");
        scanf("%d",&x);
        switch(x)
        {

                case 1:
                        printf("Enter student Name: ");
                        scanf("%s",temp->name);
                        break;
                case 2: printf("Enter student Percentage: ");
                        scanf("%f",&temp->marks);
                        break;
                case 3:
                        printf("Enter student Name: ");
                        scanf("%s",temp->name);
                        printf("Enter student Percentage: ");
                        scanf("%f",&temp->marks);
                        break;
                default:printf("Invalid choice\n");return;
        }
        puts("Record updated Successfully");
        return;}
        else
        return;
        }
        else
        temp=temp->next;
        }
       }
}


void mod_roll(ST *ptr)
{
	int n;char op;
	n=disp_roll(ptr);
	 ST *temp=ptr;
        while(temp!=0)
        {
                if(temp->roll==n){
                        printf("Are you sure you want to modify this record? (y/n): ");
                        scanf(" %c",&op);
                        if(op=='y'){ int x;
        printf("+-------------------------------------+\n");
        printf("|      Select the field to modify:    |\n");
        printf("+-------------------------------------+\n");
        printf("|      1.NAME                         |\n");
        printf("+      2.PERCENTAGE                   +\n");
        printf("|      3.BOTH                         |\n");
        printf("+-------------------------------------+\n");
	printf("Enter your choice: ");
        scanf("%d",&x);
        switch(x)
        {

                case 1:
			printf("Enter student Name: ");
			scanf("%s",temp->name);
			break;
                case 2: printf("Enter student Percentage: ");
                        scanf("%f",&temp->marks);
			break;
                case 3:
                        printf("Enter student Name: ");
                        scanf("%s",temp->name);
			printf("Enter student Percentage: ");
                        scanf("%f",&temp->marks);
                        break;
                default:printf("Invalid choice\n");return;
        }
	puts("Record updated Successfully");
        return;}
        else
        return;
        }
        else
        temp=temp->next;
        
	}
        puts("Record Not found");

}

