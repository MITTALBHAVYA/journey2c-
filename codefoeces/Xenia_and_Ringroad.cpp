#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long start=1;
    long long sum=0;
    for(long long i=0;i<m;i++)
    { 
       long long x;
       cin>>x;
      sum+=((x-start+n)%n);
      start=x;  
    }
    cout<<sum<<endl;
}