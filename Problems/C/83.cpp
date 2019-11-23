#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll x, y;
	cin >> x >> y;
	ll ans = 0;
	ll temp = x;
	while(temp <= y){
		ans++;
		temp *= 2;
	}

	cout << ans << endl;
}