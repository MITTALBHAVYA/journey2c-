#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int QuickSortPivot(vector<int>&arr,int low,int high){
    int pivot=arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
int findKthSmallest(vector<int>&arr,int low,int high,int k){
    if(k>0 && k<=high-low+1){
        int pivot=QuickSortPivot(arr,low,high);
        if(pivot-low==k-1){
            return arr[pivot];
        }
        else if(pivot-low>k-1){
            return findKthSmallest(arr,low,pivot-1,k);
        }
        else{
            return findKthSmallest(arr,pivot+1,high,k-pivot+low-1);
        }
    }
    else{
        return INT_MIN;
    }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   cout<<"ENTER size of THE ARRAY"<<endl;
   int n;
   cin>>n;
   cout<<"ENTER THE ARRAY"<<endl;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"ENTER THE VALUE OF (K) "<<endl;
   int k;
   cin>>k;
   int low=0;
   int high=n-1;
   int result=findKthSmallest(arr,low,high,k);
   if(result==INT_MIN){
    cout<<" RESULT NOT FOUND "<<endl;
   }
   else{
    cout<<result<<endl;
   }
 return 0;
}