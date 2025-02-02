#include<bits/stdc++.h>
using namespace std;
class Node{
	
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

void printLevelOrder(Node* root){
	if(root == NULL){
		return;
	}
	
	queue<Node*>q;
	
	q.push(root);
	
	while(!q.empty()){
		
		Node* current = q.front();
		q.pop();
		
		cout<<current->data<<endl;
		
		if(current->left != NULL){
			q.push(current->left);
		}
		if(current->right != NULL){
			q.push(current->right);
		}
	}
}
int main(){
	
	Node* root = new Node(1);
	root->left = new Node(3);
	root->left->left = new Node(1);
	root->left->right = new Node(2);
	root->left->right->right = new Node(7);
	
	root->right = new Node(2);
	root->right->right = new Node(5);
	
	printLevelOrder(root);
	
	return 0;
	
}