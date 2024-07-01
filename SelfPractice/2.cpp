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
        cout<<"New node can not be created!"<<endl;
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

    while(current_node!=NULL)
    {
        if(current_node->next==node)
        {
            break;
        }
        current_node = current_node->next;
    }

    if(current_node == NULL)
    {
        return head;
    }

    current_node->next = node->next;
    free(node);
    return head;
}
void print_linked_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}
int main()
{

    Node *a[10],*head=NULL;
    Node *b[10],*head2=NULL;

    for(int i=0; i<10; i++)
    {
        a[i] = create_node(i+1,head);
        head = a[i];
    }

    head = a[0];

    for(int i=0; i<10; i++)
    {
        cout<<a[i]->data<<endl;
    }
    cout<<endl;


    for(int i=0; i<10; i++)
    {
        b[i] = create_node(i+1,head2);
        head2 = b[i];
    }

    head2 = b[0];

    for(int i=0; i<10; i++)
    {
        cout<<b[i]->data<<endl;
    }
    cout<<endl;

    //remove_node(head,a[6]);
    //print_linked_list(head);
}