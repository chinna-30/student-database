#include"header.h"
int i=1;
int main()
{
	char x;int pass;
        struct st *hptr=0;
        load(&hptr);
while(1){
	sleep(3);
	system("clear");
        char op;
        printf("+-------------------------------------------+\n");
        printf("|                                           |\n");
        printf("|     *******STUDENT RECORD MENU*******     |\n");
        printf("|                                           |\n");
        printf("|-------------------------------------------|\n");
        printf("|           A/a   :Add New Record           |\n");
        printf("|-------------------------------------------|\n");
        printf("|           D/d   :Delete A Record          |\n");
        printf("|-------------------------------------------|\n");
        printf("|           S/s   :Show the List            |\n");
        printf("|-------------------------------------------|\n");
        printf("|           M/m   :Modify A Record          |\n");
        printf("|-------------------------------------------|\n");
        printf("|           V/v   :Save                     |\n");
        printf("|-------------------------------------------|\n");
        printf("|           E/e   :Exit                     |\n");
        printf("|-------------------------------------------|\n");
        printf("|           T/t   :Sort the List            |\n");
        printf("|-------------------------------------------|\n");
        printf("|           L/l   :Delete All the Records   |\n");
        printf("|-------------------------------------------|\n");
        printf("|           R/r   :Reverse the List         |\n");
        printf("+-------------------------------------------+\n");



	 printf("\n");        

	printf("    Enter an Option: ");
                scanf(" %c",&op);
		 printf("\n");
	switch(op|32)
	{
		case 'a': printf("Enter the Password: ");
					scanf("%d",&pass);
				if(pass==1234){
                	do
                	{
			   add(&hptr);
                           printf("Do you want add another student:(y/n)");
                           scanf(" %c",&x);
                     }while(x=='y');
				}
				else
					puts("Unauthorized Access");
					break;

		case 'd': printf("Enter the Password: ");
					scanf("%d",&pass);
				if(pass==1234){
					delete(&hptr);
				}
				else
					puts("Unauthorized Access");
				break;
		case 's':show(hptr);break;
        case 'm':printf("Enter the password: ");
					scanf("%d",&pass);
				if(pass==1234){
					modify(hptr);
				}
				else
					puts("Unauthorized Access");
					break;
        case 'v':save(hptr);break;
		case 'e':terminate(hptr);return 0;
        case 't':sorting(&hptr);break;
		case 'l':printf("Enter the password: ");
					scanf("%d",&pass);
				if(pass==1234){
					delete_all(&hptr);
				}
				else
					puts("Unauthorized Access");
				break;
		case 'r':printf("+-----------+-----------------+---------------+\n");
    			 printf("| ROLL-NO   | STUDENT NAME    | PERCENTAGE    |\n");
    			 printf("+-----------+-----------------+---------------+\n");
			 rev_list(hptr);
    			 printf("+-----------+-----------------+---------------+\n");
			 break;
                
        }
}
}
