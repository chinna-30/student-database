#include"header.h"
void save(ST *ptr)
{
        FILE *fp=fopen("database.txt","r+");
	ST *ptr1=ptr;
    fprintf(fp,"+-----------+-----------------+---------------+\n");
    fprintf(fp,"| ROLL-NO   | STUDENT NAME    | PERCENTAGE    |\n");
    fprintf(fp,"+-----------+-----------------+---------------+\n");

    while(ptr!=0)
    {
        fprintf(fp,"| %-9d | %-15s | %-13.2f |\n",
               ptr->roll,
               ptr->name,
               ptr->marks);
        ptr = ptr->next;
    }

    fprintf(fp,"+-----------+-----------------+---------------+\n");
    fclose(fp);
	
	
        FILE *fs=fopen("studentdata.txt","r+");
	
	while(ptr1!=0)
        {
                fprintf(fs,"%d  %s  %f\n",ptr1->roll,ptr1->name,ptr1->marks);
                ptr1=ptr1->next;
        }
        fclose(fs);
	printf("\n");
	puts("Record Saved Successfully\n");
	printf("\n");
}

