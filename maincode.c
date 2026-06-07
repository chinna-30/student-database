#include<stdio.h>
void add();
void delete();
void show();
void modify();
void save();
void sorting();
void delete_all();
void rev_list();

int main()
{
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

while(1){
		printf("Enter an Option: ");
		scanf(" %c",&op);
		
/*		if(op=='A'||op=='a')
		add();
		else if(op=='D'||op=='d')
		delete();
		else if(op=='S'||op=='s')
		show();
		else if(op=='M'||op=='m')
		modify();
		else if(op=='V'||op=='v')
		save();
		else if(op=='E'||op=='e')
		return 0;
		else if(op=='T'||op=='t')
		sorting();
		else if(op=='L'||op=='l')
		delete_all();
		else if(op=='R'||op=='r')
		rev_list();
		*/
	}
}
