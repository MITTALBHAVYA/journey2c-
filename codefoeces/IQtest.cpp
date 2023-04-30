#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2==arr[i+1]%2)&&(arr[i]%2==arr[i+2]%2)&&(arr[i+1]%2==arr[i+2]%2))
        {
            i+=2;
            continue;
        }
        else
        {
            if(arr[i]%2==arr[i+1]%2)
            {
                cout<<i+3<<endl;
                break;
            }
            if(arr[i]%2==arr[i+2]%2)
            {
                cout<<i+2<<endl;
                break;
            }
            else
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}