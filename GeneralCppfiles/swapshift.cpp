#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       // unordered_map<int,int>mp;
        int a[n];
        int start_index=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                start_index=i;
            }
        }
        //cout<<"start_index"<<start_index<<endl;
        int y=start_index;
        int first_index,f_ind_val,second_index,f_ind_val2,first_y,second_y;
        for(int i=1;i<=n;i++)
        {
            if(a[y]!=i)
            {
              first_index=i;
              f_ind_val=a[y];
              first_y=y;
              break;
            }
            y=(y+1)%n;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==first_index)
            {
                a[i]=f_ind_val;
                a[first_y]=first_index;
                break;
            }
        }
        // cout<<"FIRST SWAP"<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        ///////////////////////////////////////////////////////////////
        //int x=start_index;
        for(int i=first_index;i<=n;i++)
        {
            if(a[y]!=i)
            {
              second_index=i;
              f_ind_val2=a[y];
              second_y=y;
              break;
            }
            y=(y+1)%n;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==second_index)
            {
                a[i]=f_ind_val2;
                a[second_y]=second_index;
                break;
            }
        }
        int lp=start_index;
        //cout<<lp<<"here"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<a[lp]<<" ";
            lp=(lp+1)%n;
        }
        cout<<endl;
        // cout<<"second SWAP"<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}