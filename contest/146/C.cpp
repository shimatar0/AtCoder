#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll keta(ll c){
	ll ret = 0;
	while(c){
		c /= 10;
		ret++;
	}
	return ret;
}

int main() {
	ll a;
	ll b;
	ll x;
	cin >> a >> b >> x;
	ll l = 0;
	ll r = 1000000001;
	while(r - l > 1){
		ll c = (r + l) / 2;
		ll temp = a * c + b * keta(c);
		if(temp <= x){
			l = c;
		}else{
			r = c;
		}
	}
	cout << l << endl;
}