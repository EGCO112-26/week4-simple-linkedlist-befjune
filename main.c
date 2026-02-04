//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "node.h"
#include "std_node.h"

int main(int argc, const char * argv[]) {

    struct std_node *nodePtr, *head, *temp;
          
     head = (struct std_node*) malloc(sizeof(struct std_node)); //จองพท
     temp=head;

     int n= (argc -1)/2;
     int j = 1;

     for(int i=1; i<n+1; i++){
        //printf("%s\n",argv[j]);
        if(j%2==1) //for student id
        {
            temp->id = atoi(argv[j]);
            j++;
        }

        if(j%2==0)//for name
        {
            strcpy(temp->name, argv[j]);
            j++;
        }

        if(i<n) {
            temp-> next= (struct std_node*) malloc (sizeof(struct std_node));
            temp = temp->next;
        }

        if(i==n){
            temp-> next = NULL;
        }
        
     }

     temp->next = NULL;

     temp = head;
     while(temp){
            printf("%d %s\n", temp->id, temp->name);
            temp = temp->next;
        }
        
        //free all nodes
        temp = head;
        while(temp){
            head = head->next;
            //printf("Freeing %d %s\n",temp->id, temp->name);
            free(temp);
            temp = head;
        }
     
    return 0;
}
