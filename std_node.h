//
//  node.h
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#ifndef std_node_h
#define std_node_h

struct std_node
{
    int id;
    char name[30];
    struct std_node *next;
};

#endif /* std_node_h */