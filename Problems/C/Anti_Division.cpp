#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll c, ll d){
	return d ? gcd(d, c % d) : c;
}

ll lcm(ll c, ll d){
	return c / gcd(c, d) * d;
}

ll f(ll x, ll c, ll d){
	ll cnt = x;
	cnt -= x / c;
	cnt -= x / d;
	cnt += x / lcm(c, d);

	return cnt;
}

int main(){
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	ll a_cnt = 0;
	ll b_cnt = 0;

	a_cnt = f(a-1, c, d);
	b_cnt = f(b, c, d);

	cout << b_cnt - a_cnt << endl;
}