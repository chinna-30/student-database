#include"header.h"
void load(ST **ptr)
{
        ST temp;static ST *last1=NULL;
        FILE *fp=fopen("studentdata.txt","r");
        if(fp==NULL)
        {
                printf("No data in the file\n");
                return;
        }


        while(fscanf(fp,"%d %s %f",&temp.roll,temp.name,&temp.marks)==3)
        {
                ST *data=(ST*)malloc(sizeof(ST));
                *data=temp;
                data->next=0;
        if(*ptr==0){
                *ptr=data;
                last1=data;
        }
        else
        {
                last1->next=data;
                last1=data;
        }
        if(temp.roll>=i)
                i=temp.roll+1;
        }
                fclose(fp);
}
