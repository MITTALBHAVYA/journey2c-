#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int maxi=0;
        unordered_map<long int,long int>mp;
        for(long int i=0;i<n;i++)
        {
            long int x;
            cin>>x;
            if(x>=maxi)
            {
                maxi=x;
                mp[maxi]++;
            }
            
        }
        if(mp[maxi]%2==0)
        {
            cout<<"Zenyk"<<endl;
        }
        else
        {
            cout<<"Marichka"<<endl;
        }
    }
	// your code goes here
	return 0;
}
