#include<bits/stdc++.h>
using namespace std;
int main()
{char i{0},c;
   while(cin>>c&&i!=5)i+=c=="hello"[i];cout<<((i==5)?"YES":"NO");}