#include<iostream>
#include <bits/stdc++.h>
using namespace std;
/*You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/
//*case 1 with recurssion 
int solve(int n,int i)
{
    //base case 
    if(i==n)
    {
        return 1;
    }
    if(i>n)
    {
        return 0;
    }
    return solve(n,i+1)+solve(n,i+2);
}
int climbstairs(int n){
    int ans=solve(n,0);
    return ans;
}
int main()
{
    cout<<"enter the number of stairs"<<endl;
    int n;
    cin>>n;
    cout<<"number of ways are"<<endl;
    cout<<climbstairs(n)<<endl;
    return 0;
}
