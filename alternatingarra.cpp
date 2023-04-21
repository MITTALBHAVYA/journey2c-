#include <iostream>
using namespace std;
/*//*INPUT
3
4
1 2 3 4
4
1 -5 1 -5
6
-5 -1 -1 2 -2 -3
*/
/*//*OUTPUT
1 1 1 1
4 3 2 1
1 1 3 2 1 1
*/
//*minimum alternate subarray is possible is 3 so i wil check 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans[n]={0};
        ans[n-1]=1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            if((a[i]>0&&a[i+1]<0)||(a[i]<0&&a[i+1]>0))
            {
                ans[i]=ans[i+1]+1;
            }
            else{
                ans[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    // your code goes here
    return 0;
}
  