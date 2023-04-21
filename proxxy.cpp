#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<int>q;
        vector<int>presval(n);
       //vector<int>coop(n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>presval[i];
           // cout<<"presval is initiated"<<endl;
           // cout<<"VALUE INSERTED IS "<<presval[i]<<endl;
            if(presval[i]==1)
            {
               // cout<<"condition for presval[i] is "<<presval[i]<<endl;
                q.push(i);
               // cout<<"q mai value enter ho gyi  hai "<<endl;
                count++;
            }
        }
      //  cout<<"NOW THE SECOND CONDITION CHALU abhi tak count"<<count<<endl;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
           // cout<<"X value is"<<x<<endl;
            if((presval[i]==0) && (q.front()<i) && (x==0))
            {
                
                count++;
               // cout<<"presval hai "<<presval[i]<<"q.front hai "<<q.front()<<" i hai "<<i<<"x hai "<<x<<"count abhi tak"<<count<<endl;
                q.pop();
            }
        }
        cout<<count<<endl;
    }
	return 0;
}