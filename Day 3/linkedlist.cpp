
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	int data;
	Node *next;
};


void push(Node** head_ref, int new_data)
{
	
	Node* new_node = new Node();

	
	new_node->data = new_data;

	new_node->next = (*head_ref);


	(*head_ref) = new_node;
}


void printList(Node *node)
{   
    int count=0;
	while (node != NULL)
	{
		node = node->next;
        count++;

	}
    cout<<"Total nodes in linked list is "<<count;
}


int main()
{
	
	Node* head = NULL;
	int n,c;
    do
    {
        cout<<"enter a data :";
        cin>>n;
        	push(&head, n);
        cout<<"do u want to continue: ";
        cin>>c;
    } while (c==1);
    printList(head);
    
	
	
	return 0;
}



