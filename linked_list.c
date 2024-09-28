/*
 Linked Lists:
    - Simple implementation for linked list data structure
*/


#include <stdio.h>
#include <stdlib.h>
struct Node make_node (struct Node head, int data);

struct Node {
    struct Node *next;
    int data;
};


void main (){


    // struct Node n2;
    // n2.data = 321;
    // n2.next = NULL;

    struct Node n1;
    n1.data = 123;
    n1.next = NULL;
    
    n1 = make_node(n1, 456);

    n1 = make_node(n1, 789);

    // n1 = make_node(n1, 101112);
    
    // printf("n1 : %i\nn2 : %i\nn3 : %i\n", n1.data, n1.next->data, n1.next->next->data);

    while (1)
    {

        printf("data : %i \n", n1.data);

        if (n1.next == NULL){
            break;
        }

        n1 = *n1.next;

    }
        

}


struct Node make_node (struct Node head, int data){
    struct Node n;
    n.data = data;
    n.next = NULL;
    
    while (1)
    {
        if (head.next == NULL){
            head.next = &n;
            break;
        }

        head = *(head.next);

    }

    return head;
}

