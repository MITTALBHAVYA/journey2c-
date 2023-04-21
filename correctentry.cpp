#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s)
{
    stack<char> str;
    if (s.size() % 2 != 0)
    {
        cout<<"the first false condition"<<endl;
        return false;
        
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (str.empty())
            {
                if ((s[i] == ')' ||s[i] == '}' ||s[i] == ']'))
                {
                    cout<<"the second false condition"<<endl;
                    return false;
                }
                else
                {
                    cout<<" here it is pushed in stack"<<s[i]<<endl;
                    str.push(s[i]);
                }
            }
            else
            {
                if (s[i] == '(' ||s[i] == '{' ||s[i] == '[')
                {
                    cout<<" here it is pushed in stack"<<s[i]<<endl;
                    str.push(s[i]);
                }
                else
                {
                    switch (s[i])
                    {
                    case ')':
                        if (str.top() == '(')
                        {
                            cout<<"CHECKING TOP OF STACK 1"<<endl;
                            str.pop();
                        }
                        else
                        {
                            cout<<"SWITCH TOP ( condition"<<endl;
                            return false;
                        }
                        break;
                    case ']':
                        if (str.top() == '[')
                        {
                            cout<<"CHECKING TOP OF STACK 2"<<endl;
                            str.pop();
                        }
                        else
                        {
                            cout<<"SWITCH TOP [ condition"<<endl;
                            return false;
                        }
                        break;
                    case '}':
                        if (str.top() == '{')
                        {
                            cout<<"CHECKING TOP OF STACK 3"<<endl;
                            str.pop();
                        }
                        else
                        {
                            cout<<"SWITCH TOP { condition"<<endl;
                            return false;
                        }
                        break;
                    }
                }
            }
        }
        if (str.empty())
        {
            cout<<"LAST CONDITION OF CHECK:: TRUE"<<endl;
            return true;
        }
        else
        {
            cout<<"LAST CONDITION OF CHECK :: FALSE"<<endl;
            return false;
        }
    }
}

int main()
{
    cout<<"ENTER THE STRING HERE"<<endl;
    string s;
    cin>>s;
    if(isValid(s))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}