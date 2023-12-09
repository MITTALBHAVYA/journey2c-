#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// Structure to store information about suffixes
struct Suffix {
    ll index;
    std::string suffix;
};

// Function to compare two suffixes
bool compareSuffixes(const Suffix &a, const Suffix &b) {
    return a.suffix < b.suffix;
}

// Function to construct suffix array
std::vector<ll> buildSuffixArray(const std::string &str) {
    ll n = str.length();
    std::vector<Suffix> suffixes(n);

    // Generate suffixes of the string
    for (ll i = 0; i < n; ++i) {
        suffixes[i].index = i;
        suffixes[i].suffix = str.substr(i);
    }

    // Sort the suffixes
    std::sort(suffixes.begin(), suffixes.end(), compareSuffixes);

    // Store the indexes of sorted suffixes in the suffix array
    std::vector<ll> suffixArray(n);
    for (ll i = 0; i < n; ++i) {
        suffixArray[i] = suffixes[i].index;
    }

    return suffixArray;
}

// Function to construct LCP array
std::vector<ll> buildLCPArray(const std::string &str, const std::vector<ll> &suffixArray) {
    ll n = str.length();
    std::vector<ll> lcp(n, 0);
    std::vector<ll> invSuffixArray(n);

    // Populate inverse suffix array
    for (ll i = 0; i < n; ++i) {
        invSuffixArray[suffixArray[i]] = i;
    }

    ll k = 0;
    for (ll i = 0; i < n; ++i) {
        if (invSuffixArray[i] == n - 1) {
            k = 0;
            continue;
        }

        ll j = suffixArray[invSuffixArray[i] + 1];
        while (i + k < n && j + k < n && str[i + k] == str[j + k]) {
            k++;
        }

        lcp[invSuffixArray[i]] = k;

        if (k > 0) {
            k--;
        }
    }

    return lcp;
}

// Function to count distinct substrings
ll countDistinctSubstrings(const std::string &str) {
    ll n = str.length();
    std::vector<ll> suffixArray = buildSuffixArray(str);
    std::vector<ll> lcp = buildLCPArray(str, suffixArray);

    ll distinctSubstrings = 0;
    for (ll i = 0; i < n; ++i) {
        distinctSubstrings += (n - suffixArray[i]);
        if (i > 0) {
            distinctSubstrings -= lcp[i - 1];
        }
        distinctSubstrings %= mod; // Apply modulo operation
        if (distinctSubstrings < 0) {
            distinctSubstrings += mod;
        }
    }

    return distinctSubstrings;
}
void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  ll ans=countDistinctSubstrings(s);
  cout<<ans<<endl;
}
int main()
{
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