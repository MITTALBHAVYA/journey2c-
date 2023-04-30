#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
   regex what("WUB");
   str = regex_replace(str,what," ");
   cout<<str<<endl;
}