#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	int priority;

	struct node* next;

} Node;

Node* newNode(int d, int p)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = d;
	temp->priority = p;
	temp->next = NULL;

	return temp;
}
int peekdur(Node** head)
{
	return (*head)->priority;
}

int peek(Node** head)
{
	return (*head)->data;
}

void pop(Node** head)
{
	Node* temp = *head;
	(*head) = (*head)->next;
	free(temp);
}

void push(Node** head, int d, int p)
{
	Node* start = (*head);

	Node* temp = newNode(d, p);

	if ((*head)->priority > p)
	{
		
		temp->next = *head;
		(*head) = temp;
	}
	else
	{
		
		while (start->next != NULL &&
			start->next->priority < p)
		{
			start = start->next;
		}

		temp->next = start->next;
		start->next = temp;
	}
}

int isEmpty(Node** head)
{
	return (*head) == NULL;
}

int main()
{
    int n,index,duration,nextc,nextd;
    cin>>n;
    int sos[n];
    cout<<"duration:"<<endl;
    cin>>duration;
    Node* pq=newNode(1,duration);
    for(int i=2;i<=n;i++)
	{
       cin>>duration;
       push(&pq,i,duration);

    }
    int time =0;
		while (!isEmpty(&pq))
		{   
			nextc=peek(&pq);
			nextd=peekdur(&pq);
			sos[nextc]=time;
			time+= nextd;
			pop(&pq);
		}
    cout<<endl<<"total time:"<<time<<endl<<endl;
    cout<<"the start of service are:"<<endl;
    for(int i=1;i<=n;i++)
		{
			cout<<"sos["<<i<<"] :"<<sos[i]<<endl;
		}
	return 0;
}