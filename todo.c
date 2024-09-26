/*
  Simple To-Do List:
    Create a console-based to-do list application that allows users to add, view, and delete tasks.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void view_tasks();
void add_task();
void delete_task();

char TASKS[10][225] = {};
int ELEMENT = 0;


void main (){
    int operation;

    while (1)
    {
        printf("1) View Tasks\n");
        printf("2) Add Task\n");
        printf("3) Delete Task\n");
        printf("0) Quit\n");
        printf("Choose : ");
        scanf("%i", &operation);
        printf("___________________\n");

        if (operation == 0) {
            break;
        }

        switch (operation)
        {
        case 1:
            view_tasks();
            printf("\n___________________\n");
            break;
        
        case 2 :
            add_task();
            printf("\n___________________\n");
            break;
        
        case 3:
            delete_task();
            printf("\n___________________\n");
            break;

        default:
            printf("\nPlease Choose 1 or or 3\n");
            break;
        }
    }
    

}


void view_tasks (){
    printf("[+] All Tasks  \n");
    for (int i = 0; i < ELEMENT; i++)
    {
        printf("id : %i\n", i+1);
        printf("Task : %s\n", TASKS[i]);
        printf("---\n");
    }
    
}

void add_task() {
    printf("[+] Add Task\n");
    printf("Enter Task : ");
    scanf("%s", TASKS[ELEMENT]);
    ELEMENT++;
    printf("\nTask Saved Successfully !\n");

}

void delete_task (){
    printf("[+] Delete Task\n");
    int task_id;
    printf("Enter Task is : ");
    scanf("%i", &task_id);

    if (task_id > ELEMENT + 1){
        printf("\n task not foud !");
    }

    bool founded = false;

    for (int i = 0; i < ELEMENT; i++)
    {
        if (task_id == i + 1){
            founded = true;
            ELEMENT--;
            strcpy(TASKS[i], TASKS[i+1]);
        }
    }
    

    if (founded){
        printf("\nTask Deleted Successfully !");
    }else{
        printf("\nTask With This id Not Found !");
    }

}
