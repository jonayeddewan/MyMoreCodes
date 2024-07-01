#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *link;
};

Node *add_at_beg(Node* head, int data)
{
    Node *x =  (Node*)malloc(sizeof(Node*));
    x->data = data;
    x->link = NULL;
    x->link = head;
    head = x;
    free(x);
    x->link = NULL;

    return head;
}

int main()
{
    Node *head = (Node*)malloc(sizeof(Node*));
    head->data = 1;
    head->link = NULL;

    Node *current_node = (Node*)malloc(sizeof(Node*));

    current_node->data = 2;
    current_node->link = NULL;
    head->link = current_node;

    current_node = (Node*)malloc(sizeof(Node*));
    current_node->data = 3;
    current_node->link = NULL;
    head->link->link = current_node;

    Node* current = (Node*)malloc(sizeof(Node*));
    current = add_at_beg(head,67);


    current = head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current = current->link;
    }


}