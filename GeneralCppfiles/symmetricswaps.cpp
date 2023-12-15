#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long a[n],b[n];
        vector<long long>min_indexa;
        vector<long long>max_indexa;
        // long long ma=LLONG_MIN;
        // long long mi=LLONG_MAX;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long ma=*max_element(a,a+n);
        long long mi=*min_element(a,a+n);
        for(long long i=0;i<n;i++)
        {
            if(a[i]==ma)
            {
              max_indexa.push_back(i);
            }
            if(a[i]==mi)
            {
              min_indexa.push_back(i);
            }
        }
        long long diff=ma-mi;
        


        // vector<int>min_indexa;
        // vector<int>max_indexa;

    }
	// your code goes here
	return 0;
}