#include"header.h"
void add(ST **ptr)
{

        ST *data=(ST*)malloc(sizeof(ST));
        printf("Enter student Name: ");
        scanf("%s",data->name);
        printf("Enter student Percentage: ");
        scanf("%f",&data->marks);
        data->roll=i++;
        data->next=0;
        if(*ptr==0)
        {
                *ptr=data;
        }
        else
        {
                ST *last=*ptr;

        while(last->next!=NULL)
                last=last->next;

        last->next=data;
        }
}
