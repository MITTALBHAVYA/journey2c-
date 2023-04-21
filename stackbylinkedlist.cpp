/*here i am going to make a stack by using the concept of linked list
use the struct node for stack;
here top node initially //*NULL
with each push top get a new address and data 
*/
#include<iostream>
using namespace std;
typedef struct stack
{
    int data;
    struct stack *next;
}stack;
stack *top=NULL;
int count=0;
void push(int dat)
{
    stack *p=(stack*)malloc(sizeof(stack));
    p->data=dat;
    p->next=top;
    top=p;
    count++;
}
void pop()
{
    stack *p;
    p=top;
    if(p==NULL)
    {
        cout<<"CONDITION UNDERFLOW"<<endl;
    }
    else
    {
        cout<<"--->"<<p->data<<endl;
        top=p->next;
        free(p);
        count--;
    }
}
bool isEmpty()
{
   if(top==NULL)
   {
    return true;
   }
   else
   {
     return false;
   }
}
void peek()
{
    stack *p;
    p=top;
    if(p==NULL)
    {
        cout<<"CONDITION UNDERFLOW"<<endl;
    }
    else
    {
        cout<<"--->"<<p->data<<endl;
    }
}
void displaystack()
{
    stack *p;
    p=top;
    if(p==NULL)
    {
        cout<<"CONDITION UNDERFLOW"<<endl;
    }
    else
    {
        while(p!=NULL)
        {
            cout<<"--->"<<p->data<<endl;
            p=p->next;
        }
    }
}
void total_ele()
{
    cout << "--->" << count << endl;
}
void implement_stack()
{
    int i = 1;
    while (i)
    {
        int op;
        cout << "Enter 1 for \n-->push\nEnter 2 for \n-->pop\nEnter 3 for \n-->isEmpty\nEnter 5 for \n-->peek\nEnter 6 for \n-->display\nEnter 7 for \n-->numberofelements\nEnter 8 for \n-->exit\n"
             << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            int data;
            cin >> data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
       /* case 4:
            break;*/
        case 5:
            peek();
            break;
        case 6:
            displaystack();
            break;
        case 7:
            total_ele();
            break;
        case 8:
            i = 0;
            break;
        default:
            cout << "--->OPTION IS INVALID" << endl;
        }
    }
}
int main()
{
   implement_stack();
    return 0;
}