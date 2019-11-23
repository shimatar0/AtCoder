#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n,m; cin >> n >> m;

	if(m < n){
		ll temp = n;
		n = m;
		m = temp;
	}

	ll ans;
	if(n == 1 && m == 1){
		cout << "1" << endl;
	}else if(n == 1 && m != 1){
		cout << m - 2 << endl;
	}else{
		ans = (n-2) * (m-2);
		cout << ans << endl;
	}
}