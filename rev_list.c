#include"header.h"
void rev_list(ST *ptr)
{
	if(ptr!=0){
		rev_list(ptr->next);
	printf("| %-9d | %-15s | %-13.2f |\n",ptr->roll,ptr->name,ptr->marks);
	}
        
}
