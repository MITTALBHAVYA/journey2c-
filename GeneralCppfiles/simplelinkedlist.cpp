#include <iostream>
using namespace std;
//*initialize linked list node
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
/*/function to be formed
1)insertion from head
2)insert from last
3)insert from any position
4)transverse the list
5)delete from head
6)delete from last
7)delete from position
8)numberofnodes
9)initializelist
*/
Node *initializelist(int len)
{
    Node *head, *p, *temp;
    head = NULL;
    cout << "OUTput of head pointer initialize\n---->" << head << endl;
    cout << "OUTPUT OF DEREFRENCE POINTER OF HEAD\n---->" << &head << endl;
    int i;
    for (i = 1; i <= len; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        cout << "OUTPUT OF NODE P \n---->" << p << endl;
        cout << "OUTPUT OF DEREFRENCE OF P \n---->" << &p << endl;
        printf("ENTER THE DATA OF THE %d NODE\n---->", i);
        scanf("%d", &p->data);
        p->next = NULL;
        cout << "output of p->next\n---->" << p->next << endl;
        cout << "derefrence value of p->next\n---->" << &(p->next) << endl;
        if (i == 1)
        {
            head = temp = p;
        }
        else
        {
            temp->next = p;
            temp = p;
        }
    }
    p->next = NULL;
    cout << "output of p->next after ending of list" << p->next << endl;
    cout << "derefrence value of p->next after ending of list" << &(p->next) << endl;
    return head;
}
/*void tranverselist(Node *head)
{
    Node *p = head;
    while (p->next != NULL)
    {
        cout << p->
    }
}
*/
    int main()
{
    cout << "here we are getting the value return by function either of head or the pointer value contain inside head" << initializelist(5) << endl;
    Node *head1;
    cout<<"hoping for garbage value here"<<head1<<endl;
    cout<<"HOPING for address for head1"<<&head1<<endl;
   // head1=initializelist(5);
    cout<<head1<<endl;
    cout<<&head1<<endl;
   &head1=initializelist(5);
    cout<<head1<<endl;
    cout<<&head1<<endl;
}