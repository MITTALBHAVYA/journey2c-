#include<iostream>
using namespace std;
//*here i am going to define queue with array 
#define len 5
int queue[len];
int rear=-1,front=-1;
void enque(int data)
{
    if(rear==len-1)
    {
        cout<<"---> OVERFLOW CONDITION"<<endl;
        return;
    }
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=data;
    cout<<"VALUE INSERTED"<<endl;
}
void deque()
{
    if(front==-1||front>rear)
    {
       cout<<"UNDERFLOW CONDITION"<<endl;
       return;
    }
    else
    {
        cout<<"--->DELETED VALUE "<<queue[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        cout<<"VALUE DELETED"<<endl;
    }
}
void disqueue()
{
     if(front==-1||front>rear)
    {
       cout<<"---> UNDERFLOW CONDITION\n\n"<<endl;
       return;
    }
    else
    {
       cout<<"QUEUE IS PRESENTED AS :: "<<endl;
        for(int i=front;i<=rear;i++)
        {
            cout<<"---> "<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
void peek()
{
    if(front==-1||front>rear)
    {
       cout<<"---> UNDERFLOW CONDITION\n\n"<<endl;
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
                   enque(data);
            break;
            case 2: deque();
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