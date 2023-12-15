#include<iostream>
using namespace std;
#define max_size 5
int front=-1;
int rear=-1;
int queue[max_size];
bool isFull()
{
    if(front==(rear+1)%max_size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{
    if(front==-1&&rear==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enQueue(int data)
{
    if(isFull())
    {
        cout<<"queue overflow"<<endl;
        return;
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=data;
    }
    else
    { 
        rear=(rear+1)%max_size;
        queue[rear]=data;
    }
}
void deQueue()
{
    cout<<"DEQUEUE ACTIVATED "<<endl;
    if(isEmpty())
    {
        cout<<"CONDITION UNDERFLOW"<<endl;
        return;
    }
    else
    {
        cout<<"ELEMENT DEQUEUED"<<queue[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%max_size;
        }
    }
}
void disqueue()
{
    cout<<"DISPLAY QUEUE ACTIVATED "<<endl;
    if(isEmpty())
    {
         cout<<"CONDITION UNDERFLOW"<<endl;
        return;
    }
    else
    {
        cout<<"\nELEMENTS IN A QUEUE ARE ::"<<endl;
        int i=front;
        while(i!=rear)
        {
            cout<<queue[i]<<" ";
            i=(i+1)%max_size;
        }
        cout<<queue[i]<<endl;
    }
}
void peek()
{
    if(isEmpty())
    {
         cout<<"CONDITION UNDERFLOW"<<endl;
        return;
    }
    else
    {
        cout<<"--->"<<queue[front]<<endl;
    }
}
void implearrque()
{
    int i=1;
    while(i)
    {
        cout<<"-->*************M E N U*************<--"<<endl;
        cout<<"--->ENTER 1 TO ENTER DATA IN QUEUE\n--->ENTER 2 DELETE DATA FROM QUEUE\n--->ENTER 3 DISPLAY QUEUE\n--->ENTER 4 TO PEEK QUEUE\n--->ENTER 5 TO EXIT MENU\n"<<endl;
        cout<<"OPTION HERE-->";
        int op;
        cin>>op;
        cout<<endl;
        switch(op)
        {
            case 1:int data;
                   cout<<"ENTER THE DATA HERE::: \n--> ";
                   cin>>data;
                   enQueue(data);
            break;
            case 2: deQueue();
            break;
            case 3:disqueue();
            break;
            case 4:peek();
            break;
            case 5:i=0;
            break;
            default:
            cout<<"OPTION IS NOT VALID "<<endl;     
        }
    }
}
int main()
{
    implearrque();
    return 0;
}