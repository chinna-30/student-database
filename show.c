#include "header.h"
void show(ST *ptr)
{
	if(ptr==0){
	puts("File is empty. No records to display.\n");
	return;
	}
    printf("+-----------+-----------------+---------------+\n");
    printf("| ROLL-NO   | STUDENT NAME    | PERCENTAGE    |\n");
    printf("+-----------+-----------------+---------------+\n");

    while(ptr)
    {
        printf("| %-9d | %-15s | %-13.2f |\n",
               ptr->roll,
               ptr->name,
               ptr->marks);
        ptr = ptr->next;
    }

    printf("+-----------+-----------------+---------------+\n");
}
