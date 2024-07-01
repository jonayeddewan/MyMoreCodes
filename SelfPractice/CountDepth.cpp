#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	Node* left;
	Node* right;
	Node(int v): val(v), left(nullptr), right(nullptr){};
};

int depth(Node* root){
	if(!root){
		return 0;
	}
	int leftDepth = depth(root->left);
	int rightDepth = depth(root->right);
	
	return 1 + max(leftDepth,rightDepth);
}
int main(){
	
	Node* root = new Node(1);
	root->left = new Node(3);
	root->left->left = new Node(1);
	root->left->right = new Node(2);
	root->left->right->right = new Node(7);
	
	root->right = new Node(2);
	root->right->right = new Node(5);
	
	
	cout<<depth(root)<<endl;
	
	return 0;
	
}