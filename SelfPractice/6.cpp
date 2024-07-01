#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *create_node(int item,Node* next)
{
    Node *new_node = (Node*)malloc(sizeof(Node*));

    new_node->data = item;
    new_node->next = next;

    return new_node;
}
void *remove_node(Node *head, Node *node)
{
    if(node==head)
    {
        head = node->next;
        free(node);
        return head;
    }

    Node* current = head;
    while(1)
    {
        if(current==node)
        {
            current = node->next;
            free(node);
            return head;
        }
        current = node->next;
    }
}
int main()
{
    Node* a[100];

    a[0] = create_node(1,NULL);
    for(int i=1; i<100; i++)
    {
        a[i] = create_node(i+1,NULL);
        a[i-1]->next = a[i]; 
    }

    Node* node = a[0];

    // while(node!=NULL)
    // {
    //     printf("%d ",node->data);
    //     node = node->next; 
    // }
    // cout<<"\n";

    //remove_node(a[0],a[10]);


    // while(node!=NULL)
    // {
    //     printf("%d ",node->data);
    //     node = node->next; 
    // }
    // cout<<"\n";

    cout<<a[0]->next->next->next->next->next->data<<endl;

    for(int i=1; i<100; i++)
    {
        free(a[i]);
    }

     while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next; 
    }
    cout<<"\n";

}