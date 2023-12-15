#include<iostream>
using namespace std;
//*here i am going to define a cicularqueue with linked list 
typedef struct Node
{
   int data;
   struct Node *next;
}Node;
Node *front=NULL;
Node *rear=NULL;
void enQueue(int d)
{
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=d;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    cout<<"VALUE INSERTED"<<endl;
}
void deQueue()
{
    if(front==rear)
    {
        cout<<"ELEMENT DEQUED--->"<<front->data<<endl;
        front=NULL;
        rear=NULL;
    }
    else
    {
        cout<<front->data<<endl;
        Node *temp=front;
        front=front->next;
        rear->next=rear->next->next;
        free(temp);
    }
}
void displayQueue()
{
    if(front==NULL||rear==NULL)
    {
        cout<<"QUEUE IS EMPTY"<<endl;
        return;
    }
    else
    {
        Node *temp=front;
        cout<<"QUEUE GIVEN BELOW"<<endl;
        while(temp->next!=front)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
            if(temp->next==front)
            {
                cout<<temp->data;
            }
        }
        cout<<endl;
    }
}
void peek()
{
    Node *temp=front;
    if(front==NULL||rear==NULL)
    {
       cout<<"UNDERFLOW CONDITION"<<endl;
       return;
    }
    else
    {
     cout<<"---> "<<temp->data<<" "<<endl;
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
            case 3:displayQueue();
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
