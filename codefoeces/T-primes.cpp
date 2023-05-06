#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
long long int a,b,j;
cin>>n;
while(n--){
cin>>a;
b=sqrt(a);
for(j=2;j*j<=b;j++) 
{if(b%j==0) break;}
if(j*j>b&&b*b==a&&a>1)
{
    cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}
}
}