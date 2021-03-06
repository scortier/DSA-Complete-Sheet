/*
APPROACH:
https://www.youtube.com/watch?v=MLff3CxNVTc&list=PL-Jc9J83PIiGl_-iS5k7R7SZoZPt0Fab2&index=10

as bst m inorder sorted order m print hota hai
so reverse of inorder m largest pehle aega mens rst ka right most node pehle visite hoga reverse inorder m usko sum=0 m stor karo and node ki sum se change kardo i.e 0now.
fir upar gae uske parent ki trf uuse nikala aur sum ki intial val se replace kardiya and uski val sum m add kardi.
ans so on
*/
//Author: Aditya Singh Sisodiya (Scortier)
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

Node *newNode(int x)
{
	Node* temp = new Node;
	temp->left = temp->right = NULL;
	temp->data = x;
	return temp;
}

int sum = 0;
void sol(Node *root)
{
	if (root == NULL) return;
	sol(root->right);
	int temp = root->data;
	root->data = sum;
	sum += temp;
	sol(temp->left);

}

int32_t main()
{
	Node* root = NULL;

	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);

	root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);

	sol(root);
	return 0;
}