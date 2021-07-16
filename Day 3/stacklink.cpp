#include <bits/stdc++.h>
using namespace std;
 

struct Node
{
    int data;
    struct Node* link;
};
 
struct Node* top;
 
void push(int data)
{
     
    
    struct Node* temp;
    temp = new Node();
 
    
    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }
 
    temp->data = data;
 
    temp->link = top;
 
    top = temp;
}
 

int isEmpty()
{
    return top == NULL;
}
 
int peek()
{
     
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}
 

void pop()
{
    struct Node* temp;
 

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
         
        temp = top;
 
       
        top = top->link;
 
      
        temp->link = NULL;
 
       
        free(temp);
    }
}
 

void display()
{
    struct Node* temp;
 
  
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
 
            
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}
 

int main()
{
     
   int n,c;
    do
    {
        cout<<"enter a data :";
        cin>>n;
        	push(n);
        cout<<"do u want to continue: ";
        cin>>c;
    } while (c==1); 
    display();
 
 
    cout <<endl<< "\nTop element is "
         << peek() << endl;
 
    
    pop();
    pop();
 
   
    display();
 
    
    cout << "\nTop element is "
         << peek() << endl;
          
    return 0;
}