#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll gcd(ll c, ll d){
		return d ? gcd(d, c % d) : c;
	}

ll lcm(ll c, ll d){
		return c / gcd(c, d) * d;
	
	}

int main(){
    ll a, b;
    cin >> a >> b;
    ll ans;
    ans = lcm(a,b);
    cout << ans << endl;
}