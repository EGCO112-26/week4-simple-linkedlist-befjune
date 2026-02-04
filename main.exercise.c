//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,e,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("---------------ex.1---------------\n");
    
    //ex.1
    b.next=&d;
    head = &b;
    d.value = head->value+3;
    printf("%d\n", head ->next->value ); //what value for 11

    /*d.next= NULL;
    head = &d;
    e.value = head -> value+3;
    printf("%d\n", head ->next->value );*/

/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */

    //insert beginning
    struct node f;
    f.value = 2;
    f.next = &a;
    head = &f; //เอา head มาชี้ให้ f เป็นตัวหน้าสุด
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value ); //what value for 8
    printf("%d\n", head ->next->next->next->value ); //what value for 8
    printf("----------------ex.2-----------------\n");

    //insert between
    struct node g;
    g.value = 7;
    g.next = &b;
    a.next = &g;
    head = &f;
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value ); //what value for 8
    printf("%d\n", head ->next->next->next->value ); //what value for 8
    printf("%d\n", head ->next->next->next->next->value ); //what value for 8
    printf("--------------ex.3-------------\n");

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        printf("print using loop");
    //  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
          tmp = tmp->next;
        }
        printf("\n------------ex.4------------\n");
    
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(tmp){
            printf("%3d", tmp->value);
           // What is missing???
           tmp = tmp->next;
        }
        printf("------------ex.5------------\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help*/
          
    printf("Ex.V : Use malloc to create all nodes, instead of create a struct!!\n")
     NodePtr temp;
     head=  (NodePtr) malloc(sizeof(struct node)); //จองพท
     temp=head;

     n=10;
     for(i=0; i<2; i++){
        temp->value =7+i*2;
        temp-> next= (NodePtr)malloc(sizeof(struct node));
        temp = temp->next;
     }

     temp->value = 7+i*2;
     temp->next = NULL;

     tmp = head;
     while(tmp){
            printf("%3d", tmp->value);
           // What is missing???
           tmp = tmp->next;
        }
        printf("\n------------ex.6------------\n");

     head->value = 7;
     head -> next= (NodePtr) malloc(sizeof(struct node));
     head -> next->value = 9;
     head -> next->next= (NodePtr) malloc(sizeof(struct node));

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
