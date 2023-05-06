#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,a,b;
  cin>>n>>m>>a>>b;
    long long q=n/m;
    long long rem=n%m;
    long long pricerem=0;
    if(rem*a<b)
    {
       pricerem=rem*a;
    }
    else
    {
        pricerem=b;
    }
    long long pricemould=q*b;
    long long price2=n*a;
    long long price1=pricerem+pricemould;
    if(price1<price2)
    {
        cout<<price1<<endl;
    }
    else
    {
        cout<<price2<<endl;
    }
}