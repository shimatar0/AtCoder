#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll min_num = 1001001001001001;
	for(int i = 0; i < 5; i++){
		ll tmp; cin >> tmp;
		min_num = min(tmp, min_num);
	}

	ll ans = (n + (min_num - 1)) / min_num;

	cout << ans + 4 << endl;
}