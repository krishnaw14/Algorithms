// Representing a binary search tree

#include <iostream>

using namespace std;

struct Node
{
	Node *left, *right;
	int value;
};

bool find(Node* myset, int x)
{
	if(myset==NULL)
		return false;

	if(x==myset->value)
		return true;
	else if(x<myset->value)
		return find(myset->left,x);
	else 
		return find(myset->right,x);
}

void insert(Node* &myset, int x)
{
	if(myset==NULL)
	{
		myset=new Node();
		myset->left=NULL;
		myset->right=NULL;
		myset->value=x;
	}
	else
	{
		if(x==myset->value)
			return;
		else if(x<myset->value)
			return insert(myset->left,x);
		else
			return insert(myset->right,x);
	}
}
void print(Node* myset)
{
	if(myset==NULL)
		return;
	print(myset->left);
	cout<<myset->value<<endl;
	print(myset->right);
}

int main()
{
	//Sample main Program

	Node* myset = NULL;
	insert(myset, 40);
	insert(myset,20);

	for(int i=0;i<10;i++)
		insert(myset,i);

	cout<<"Finding 30: "<<find(myset,30)<<endl; // should print 0
	cout<<"Finding 40: "<<find(myset,40)<<endl; // should print 1
	cout<<"Calling print function"<<endl;
	print(myset);
}
