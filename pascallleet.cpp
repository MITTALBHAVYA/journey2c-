#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for (int line = 1; line <= numRows; line++)
        {
           int c= 1;
            for (int i = 1; i <= line; i++)
             {
                ans[line-1].push_back(c);
               c= c * (line - i) / i;
             }
        }
        return ans;
}
int main()
{
    cout<<"enter the nuber of rows"<<endl;
    int row;
    cin>>row;
    vector<vector<int>>ans=generate(row);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}