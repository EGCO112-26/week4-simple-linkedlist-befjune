//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"
struct std_node
    {
        int id;
        char name[30];
        struct std_node *next;
    };
    typedef struct std_node nodePtr;

int main(int argc, const char * argv[]) {
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help*/
          
    printf("Ex.V : Use malloc to create all nodes, instead of create a struct!!\n");
     nodePtr temp;
     head = (nodePtr) malloc(sizeof(struct std_node)); //จองพท
     temp=head;

     n=(argc-1)/2;
     for(i=0; i<n; i++){
        temp->value =7+i*2;
        temp-> next= (nodePtr) malloc (sizeof(struct std_node));
        temp = temp->next;
     }

     temp->value = 7+i*2;
     temp->next = NULL;

     temp = head;
     while(temp){
            printf("%3d", temp->value);
           // What is missing???
           temp = temp->next;
        }
        printf("\n------------ex.6------------\n");

     /*head->value = 7;
     head -> next= (NodePtr) malloc(sizeof(struct node));
     head -> next->value = 9;
     head -> next->next= (NodePtr) malloc(sizeof(struct node));*/

     //free(tmp);
    /*  Exercise VI Free all node !!
         //use a loop to help */
        printf("Ex.VI : Free all node\n");
        
        temp = head;
        while(temp){
            head = head->next;
            printf("Freeing %d\n",temp->value);
            free(temp);
            temp = head;
        }
     
    
    return 0;
}
