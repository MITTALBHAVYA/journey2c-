#include <iostream>
#include <map>
#include <cmath>

using namespace std;

#define mod 998244353
map<long long, long long> a;

long long quickpow(long long a, long long b){
    long long ans = 1;
    a = a % mod;
    while(b){
        if(b % 2) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

int main() {
    long long n, t, flag = 1, maxn = 0;
    long long ans = 1;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
        maxn = max(maxn, t);
        if((i == 0 and t != 0) or (i != 0 and t == 0)) flag = 0;
    }
    if (flag) {
        for (long long i = 1; i <= maxn; i++) {
            ans = (ans % mod * quickpow(a[i - 1], a[i]) % mod) % mod;
        }
        cout << ans % mod << endl;
    } else cout << 0 << endl;
    return 0;
}