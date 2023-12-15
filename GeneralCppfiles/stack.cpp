// here i am going to initiliaze stack by the use of array
// stack need a well sized array
// few functions to work
//*functions like ::
//*push{done}
//*pop{done}
//*isEmpty{done}
//*isFull{done}
//*peek{done}
//*display{done}
//*total elements{done}
#include <iostream>
using namespace std;
#define len 5
int stack[len];
int top = -1;
// here first function for me is to check whether the function is empty or not
bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if (top == len - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int data)
{
    if (isFull())
    {
        cout << "--->{overflow need space first}\n\n\n"
             << endl;
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "  --->underflow no data to be poped out" << endl;
    }
    else
    {
        cout << "--->" << stack[top] << endl;
        top--;
    }
}
void peek()
{
    if (isEmpty())
    {
        cout << "--->stack is empty add some data first" << endl;
    }
    else
    {
        cout << "--->" << stack[top] << endl;
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "--->stack is empty add some data first" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "--->" << stack[i] << endl;
        }
    }
}
void total_ele()
{
    cout << "--->" << top + 1 << endl;
}
// ::conditions to be check
//?overflow
//?underflow
//?isEmpty
//?isFull
//?peek
//?display
//?numberofelements
// lets do this //*{make a loop that continue to push pop display peek isempty isfull number of elements and exit for sure }
void implement_stack()
{
    int i = 1;
    while (i)
    {
        int op;
        cout << "Enter 1 for \n-->push\nEnter 2 for \n-->pop\nEnter 3 for \n-->isEmpty\nEnter 4 for \n-->isFull\nEnter 5 for \n-->peek\nEnter 6 for \n-->display\nEnter 7 for \n-->numberofelements\nEnter 8 for \n-->exit\n"
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
        case 4:
            isFull();
            break;
        case 5:
            peek();
            break;
        case 6:
            display();
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