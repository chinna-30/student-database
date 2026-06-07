#include"header.h"
void delete(ST **ptr)
{

	char op;
	printf("+-------------------------------------+\n");
	printf("|      R/r :Enter Rollno to Delete    |\n");
	printf("+-------------------------------------+\n");
	printf("|      N/n :Enter name to Delete      |\n");
	printf("+-------------------------------------+\n");
 	printf("\n");
	printf("       Enter your choice : ");
	scanf(" %c",&op);
	printf("\n");
	switch(op|32)
	{

		case 'r':del_roll(ptr);break;
		case 'n':del_name(ptr);break;
		default:printf("Invalid choice\n");return;       
	}
}
