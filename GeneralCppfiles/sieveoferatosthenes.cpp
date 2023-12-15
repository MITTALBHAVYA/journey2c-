#include<iostream>
using namespace std;

void sieveofprime(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the range upto which prime number to be print"<<endl;
    cin>>n;
    sieveofprime(n);
}