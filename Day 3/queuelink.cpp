#include <bits/stdc++.h>
using namespace std;
  
struct QNode {
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};
  
struct Queue {
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
  
  void display(){
        QNode* temp = front;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
  }
    void enQueue(int x)
    {
  
        
        QNode* temp = new QNode(x);
  
        
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
  
        rear->next = temp;
        rear = temp;
    }
  
    void deQueue()
    {
        
        if (front == NULL)
            return;
  
        QNode* temp = front;
        front = front->next;
  
        if (front == NULL)
            rear = NULL;
  
        delete (temp);
    }
};
  

int main()
{
  
    Queue q;
   int n,c;
    do
    {
        cout<<"enter a data :";
        cin>>n;
        	q.enQueue(n);
        cout<<"do u want to continue: ";
        cin>>c;
    } while (c==1); 
    q.deQueue();
    cout <<endl<< "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
    cout<<endl<<"the queue is:"<<endl;
    q.display();

}
