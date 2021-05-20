#include <stdio.h>
#include <stdbool.h>
#include "list.h"

plist_node_t s_list;  //单链表


plist_node_t init_list(void)
{
    plist_node_t tmp_list = NULL;
    tmp_list = (plist_node_t)malloc(sizeof(list_node_t));
    return tmp_list;
}


void clear_list(plist_node_t L)
{
    L->next = NULL;
}

/*链表判空*/
bool list_is_empty(plist_node_t L)
{
    return (L->next == NULL);
}

/*判断当前元素是否为最后一个元素*/
bool is_last_element(plist_node_t X, plist_node_t L)
{
    return (X->next == NULL);
}

/*查找元素*/
plist_node_t find_element(element_type X, plist_node_t L)
{
    plist_node_t tmp_list = L->next;

    while(tmp_list->next != NULL && (tmp_list->element != X))
    {
        tmp_list = tmp_list->next;
    }

    return tmp_list;
}

/*查找某元素的前驱节点*/
plist_node_t find_prev_element(element_type X, plist_node_t L)
{
    plist_node_t tmp_list = L;

    while(tmp_list->next != NULL && (tmp_list->next->element != X))
    {
        tmp_list = tmp_list->next;
    }

    return tmp_list;
}

/*删除元素*/
void delete_element(element_type X, plist_node_t L)
{
    plist_node_t prev_node = NULL,tmp;

    prev_node = find_prev_element(X,L);

    if(!is_last_element(prev_node,L))  //不是最后一个元素
    {
        tmp = prev_node->next;
        prev_node->next = tmp->next;
        free(tmp); //释放内存
    }

}

/*插入元素到pos后面*/
void insert_element(element_type X, plist_node_t L, plist_node_t pos)
{
    plist_node_t tmp_cell = (plist_node_t)malloc(sizeof(list_node_t));
    if(tmp_cell == NULL)
        printf("malloc list cell is err\n");

    tmp_cell->element = X;
    tmp_cell->next = pos->next;
    pos->next = tmp_cell;

}


/*插入元素到最后*/
void insert_element_last(element_type X, plist_node_t L)
{
    plist_node_t tmp_last = L;
    plist_node_t tmp_cell = (plist_node_t)malloc(sizeof(list_node_t));
    if(tmp_cell == NULL)
        printf("malloc list cell is err\n");

    while(tmp_last->next != NULL)
    {
        tmp_last = tmp_last->next;
    }

    tmp_cell->element = X;
    tmp_last->next = tmp_cell;
    tmp_cell->next = NULL;

}


void test_slist(void)
{
    
    s_list = init_list();
    insert_element_last(2,s_list);
    insert_element_last(3,s_list);
    insert_element_last(4,s_list);
    insert_element_last(5,s_list);
    delete_element(2,s_list);



    plist_node_t tmp_cell = s_list;

    while(tmp_cell->next != NULL)
    {
        tmp_cell = tmp_cell->next;
        printf("%d \n",tmp_cell->element);
    }

}