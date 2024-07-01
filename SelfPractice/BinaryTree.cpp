#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node {
	int data;
	struct node *l,*r;
};
Node* create()
{
	Node* newNode;
	int x;
	newNode = (Node*)malloc(sizeof(Node*));
	cin>>x;
	if(x==-1)
		return 0;
	newNode->data = x;
	cout<<"left child node (-1 for no node) "<<x<<": "<<endl;
	newNode->l = create();
	cout<<"right child node (-1 for no node) "<<x<<": "<<endl;
	newNode->r = create();
	
	return newNode; 
}
// Node* Preorder(Node* root)
// {
// 	if(root==NULL)
// 		return 0;
	
// 	cout<<root->data<<endl;
// 	Preorder(root->l);
// 	Preorder(root->r);
// }
// Node* Inorder(Node* root)
// {
// 	if(root==NULL)
// 		return 0;
	
// 	Inorder(root->l);
// 	cout<<root->data<<endl;
// 	Inorder(root->r);
// }
Node* Postorder(Node* root)
{
	if(root==NULL)
		return 0;
	Postorder(root->l);
	Postorder(root->r);
	cout<<root->data<<endl;
}
int main()
{
	Node* root = NULL;
	cout<<"root node (-1 for no node): "<<endl;
	root = create();
	
	cout<<"Preorder is: "<<endl;
	//Preorder(root);
	//Inorder(root);
	Postorder(root);
}
