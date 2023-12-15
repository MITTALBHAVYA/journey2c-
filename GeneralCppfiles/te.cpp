#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
#define mod 998244353
#define ll long long int
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        string n;
        cin>>n>>k;
        long long size=(n.length())%mod;
        long long ksize=size;
        string str="";
        for(long long i=0;i<ksize;i++)
        {
            switch(n[i])
            {
                case '1':str=str+to_string((int)pow(10,size-1));
                break;
                case '2':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '3':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '4':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '5':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '6':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '7':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '8':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
                case '9':str=str+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1))+to_string((int)pow(10,size-1));
                break;
            }
            size--;
        }
        cout<<str<<endl;
        cout<<str.length()<<endl;
    }
	// your code goes here
	return 0;
}