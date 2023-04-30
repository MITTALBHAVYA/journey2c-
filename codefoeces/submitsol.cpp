#include <bits/stdc++.h>
using namespace std;
 
int n;
 
int main() {
	cin >> n;
	while(cin >> n){
		int a = 0, b = 0, c = 0, x = 1;
		for(int i = 1; i <= n; i++){
			int h; cin >> h;
			h %= 2; a += h;
			if(h == 1){
				b += abs(i - 1 - x);
				c += abs(i - x);
				x += 2;
			}
		}
		if(abs(n - a - a) > 1)cout << "-1\n";
		else{
			if(n%2 == 0)cout << min(b, c) << '\n';
			else if(a < n - a)cout << b << '\n';
			else cout << c << '\n';
		}
	}
}