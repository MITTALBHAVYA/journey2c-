#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,y;
        cin>>n>>y;
        long long a[y];
        long long int ans=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            ans=ans|a[i];
        }
        long long op=y^ans;
        if(y>=op)
        {
            cout<<"y>op"<<endl;
            cout<<op<<endl;
        }
        else
        {
            cout<<"y<op"<<endl;
            cout<<-1<<endl;
        }
    }
	// your code goes here
	return 0;
}
/*
#include <iostream>
using namespace std;
/*void solve(int n,int y)
{
    int ans=0;
    int op;
    int a[y];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans|a[i];
         op=y^ans;
         if(op>y||a[i]>y)
        {
             cout<<-1<<endl;
             return;
         }
    }
   // cout<<op<<endl;
   int x=y-ans;
   if((x&y)==x)
   {
       cout<<x<<endl;
   }
   else
   {
       cout<<-1<<endl;
   }
}*/
/*int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,y;
        cin>>n>>y;
       // solve(n,y);
       
    int ans=0;
    int op;
    int a[y];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans|a[i];
        //  op=y^ans;
        //  if(op>y||a[i]>y)
        // {
        //      cout<<-1<<endl;
        //      return;
        //  }
    }
   // cout<<op<<endl;
   int x=y-ans;
   if((x&y)==x)
   {
       cout<<x<<endl;
   }
   else
   {
       cout<<-1<<endl;
   }
        
    }
	// your code goes here
	return 0;
}


*/