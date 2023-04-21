#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[k-1]==0)
    {
        for(int i=0;i<k-1;i++)
        {
            if(arr[i]>0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    else
    {
        for(int i=k;i<n;i++)
        {
            if(arr[i]==arr[k-1])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<k+count<<endl;
    }
}
/*
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned int
int main()
{
    ll n, k;
    cin >> n >> k;
    int arr[n];
    for (ll i = 1; i <= n; i++)
 
    {
        cin >> arr[i];
    }
    ll kth = arr[k];
  
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (kth != 0 && arr[i] >= kth)
        {
            count++;
        }
        else if (kth == 0 && arr[i] > kth)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

*/