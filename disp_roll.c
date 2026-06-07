#include"header.h"
int disp_roll(ST *ptr)
{
	int n;
	printf("Enter Roll number: ");
        scanf("%d",&n);
	ST *c1=ptr;
         while(c1!=0){
                if(c1->roll==n){
		        printf("\n"); 	
                        printf("+-----------+---------------------------+---------------+\n");
                        printf("| ROLL-NO   | STUDENT NAME              | PERCENTAGE    |\n");
                        printf("+-----------+---------------------------+---------------+\n");
                        printf("| %-9d | %-25s | %-13.2f |\n",c1->roll,c1->name,c1->marks);
                        printf("+-----------+---------------------------+---------------+\n");
                }
                c1=c1->next;
        }
	 return n;
}
