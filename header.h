#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct st
{
        int roll;
        char name[20];
        float marks;
        struct st *next;
}ST;
extern int i;
void load(ST **ptr);
void add(ST **ptr);
void save(ST *ptr);
void show(ST *ptr);
void delete(ST **ptr);
void del_roll(ST **ptr);
int disp_roll(ST *ptr);
void del_name(ST **ptr);
void terminate(ST *ptr);
void delete_all(ST **ptr);
void rev_list(ST *ptr);
void modify(ST *ptr);
void sorting(ST **ptr);
