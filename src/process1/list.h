#ifndef _LIST_H
#define _LIST_H
#include <stdbool.h>

typedef int element_type;


/*表节点*/
struct node{

    element_type element;
    struct node  *next;

};
typedef struct node list_node_t, *plist_node_t;

void clear_list(plist_node_t L);
bool list_is_empty(plist_node_t L);
bool is_last_element(plist_node_t X, plist_node_t L);
plist_node_t find_element(element_type X, plist_node_t L);
void delete_element(element_type X, plist_node_t L);
void insert_element(element_type X, plist_node_t L, plist_node_t pos);
void insert_element_last(element_type X, plist_node_t L);
plist_node_t find_prev_element(element_type X, plist_node_t L);

void test_slist(void);


#endif