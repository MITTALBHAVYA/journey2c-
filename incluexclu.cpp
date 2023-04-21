#include<iostream>
using namespace std;

int divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{
    cout<<"ENTER the number"<<endl<<"enter the first number"<<endl<<"enter the second number"<<endl;
    int n,a,b;
    cin>>n>>a>>b;
   int output=divisible(n,a,b);
   cout<<output<<endl;
}