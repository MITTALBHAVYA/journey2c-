#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
vector<bool>primes(100000,false);
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int findLesserNearestPrime(int n) {
    if (n <= 2) return 2; // 2 is the smallest prime

    while (true) {
        n--;
        if (primes[n]) return n;
    }
}
void solve(){
  int n;
  cin>>n;
  if(n<=3)
  {
    cout<<-1<<endl;
  }
 /* else if(n==4)
  {
    cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
  }*/
  else{
    int lop=findLesserNearestPrime(n);
    int diff=n-lop;
    if(diff==1)
    {
      lop=findLesserNearestPrime(lop);
    }
   //cout<<"nearest prime"<<lop<<endl;
    diff=n-lop;
    if(primes[diff])
    {
      for(int i=n-diff+1;i<=n;i++)
      {
        cout<<i<<" ";
      }
      for(int i=1;i<=n-diff;i++)
      {
        cout<<i<<" ";
      }
      cout<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  }
}
int main()
{
  for(int i=1;i<=100000;i++)
  {
    if(isPrime(i))
    {
      primes[i]=true;
    }
  }
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}