#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int>mp;
    // n is number of elements in array
    int ma=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int ans;
    for(auto i:mp)
    {
          if(i.second>ma)
          {
            ma=i.second;
            ans=i.first;
          }   
    }
    return ans;
    //Write your code here
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        cout<<maximumFrequency(arr,n)<<endl;
    }
    
}