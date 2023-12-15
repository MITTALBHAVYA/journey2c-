// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

long long prosqrt(long long n)
{
    double x=sqrt(n);
    if(x*x==n)
    {
        return x*x;
    }
    else
    {
        return -1;
    }
}
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a=sqrt(n);
       // cout<<a<<endl;
        long long b=n-a*a;
       // cout<<b<<endl;
        if(b==prosqrt(b))
        {
            cout<<a<<" "<<sqrt(b)<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
	// your code goes here
	return 0;
}
