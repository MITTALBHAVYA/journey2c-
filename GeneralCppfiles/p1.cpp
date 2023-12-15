    #include <bits/stdc++.h>
    #define ll long long
    #define mod 1000000007
    using namespace std;
  int longestSubsequence(int n, int arr[])
    {
       // your code here(
       vector<int> hashwalachod;
       hashwalachod.push_back(arr[0]);
       
       for(int i=1;i<n;i++){
           if(arr[i]>hashwalachod.back()){
             //cout<<arr[i]<<">"<<hashwalachod.back()<<"(true)"<<endl;
             hashwalachod.push_back(arr[i]);
            //  cout<<"{";
            //  for(auto i:hashwalachod)
            //  {
            //     cout<<i<<",";
            //  }
            //  cout<<"}"<<endl;
            //  }
           }
           else{
              // cout<<arr[i]<<">"<<hashwalachod.back()<<"(--false--)"<<endl;
               int lb= lower_bound(hashwalachod.begin(),hashwalachod.end(),arr[i]) - hashwalachod.begin();
              // cout<<"lb at "<< i << " is "<< lb<<endl;
               hashwalachod[lb] = arr[i];
              // cout<<" hashwalachod["<<lb<<"] is "<<hashwalachod[lb]<<endl;
             //cout<<"{";
            //  for(auto i:hashwalachod)
            //  {
            //     cout<<i<<",";
            //  }
            //  cout<<"}"<<endl;
           }
       }
       return hashwalachod.size();
    }
    
    int main()
    {
      ios::sync_with_stdio(0);
       cin.tie(0);
       int n;
      cout<<"enter the size of the array "<<endl;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      int ans=longestSubsequence(n,arr);
      cout<<"answer is here : "<<ans<<endl;
     return 0;
    }