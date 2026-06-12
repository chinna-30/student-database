outfile:load.c main.c add.c show.c save.c delete.c del_roll.c disp_roll.c del_name.c terminate.c delete_all.c rev_list.c modify.c sorting.c
        cc load.c main.c add.c show.c save.c delete.c del_roll.c disp_roll.c del_name.c terminate.c delete_all.c rev_list.c modify.c sorting.c -o student
clean:
        rm -f student *.o 
