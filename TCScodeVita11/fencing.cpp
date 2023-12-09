#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll a1,a2,b1,b2,c1,c2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	ll distance1=ceil((1.0*sqrt(1.0*((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2))))),distance2=ceil((1.0*sqrt(1.0*((c1-a1)*(c1-a1)+(c2-a2)*(c2-a2)))));
	ll looper=ceil(3.14*distance1*distance1),dooper=ceil(3.14*distance2*distance2);
	if(looper>dooper){
		cout<<"Krishna "<<(looper-dooper)*20;
		return;
	}
	ll cst=dooper-looper;
	float sq=sqrt(1.0*cst);
	float case1=floor(sq),case2=ceil(sq);
	case1=sq-case1;
	case2-=sq;
	if(case1<case2){
		case2=floor(sq);
		case2*=case2;
	}
	else{
		case2=ceil(sq);
		case2*=case2;
	}
	looper=case2;
	case2=abs(case2-cst);
	case2*=20;
	if(case2==0) cout<<-1;
	else{
		if(cst>looper) cout<<"Shiva "<<case2;
		else cout<<"Krishna "<<case2;
	}
}

int main() {
	solve();
    return 0;
}