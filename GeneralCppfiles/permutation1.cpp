//*it is a short cut trick by the STL*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    cout<<"ENTER THE DISTINCT NUMBERS "<<endl;
    int n;
    cin>>n;
    vector<int>nums;
    int x;
    for(int i=0;i<n;i++)
    {
        printf("ENTER THE %d number\n",i+1);
        cin>>x;
        nums.push_back(x);
    }
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    do
    {
           ans.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));
    for(auto v:ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
