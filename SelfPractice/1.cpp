#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node*)malloc(sizeof(Node));

    if(new_node==NULL)
    {
        cout<<"Error! Could not create new a New Node"<<endl;
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;

    return new_node;
}
Node *remove_node(Node *head, Node *node)
{
    if(node==head)
    {
        head = node->next;
        free(node);
        return head;
    }

    Node *current_node = head;

    while(current_node->next!=NULL && current_node->next!=node)
    {
        if(current_node->next==node)
        {
            break;
        }
        current_node = current_node->next;

    }
    if(current_node->next==NULL)
    {
        // cout<<"Error! Node not found"<<endl;
        // exit(1);
        return head;
    }
    current_node->next = node->next;
    free(node);
    return head;

}
int main()
{
    Node *n;
    n = create_node(10,NULL);
    remove_node(n,n);

    cout<<"Data = "<<n->data<<endl;

    return 0;
}

