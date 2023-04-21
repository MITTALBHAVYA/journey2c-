#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int mat[m][n]={{0},{0}};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}