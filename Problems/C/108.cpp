#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	ll cnt = 0;
	for(int i = 1; i <= n; i++){
		if(i % k == 0) cnt++;
	}

	ll cnt_2 = 0;
	for(int i = 1; i <= n; i++){
		if(i % k == (k / 2)) cnt_2++;
	}

	ll ans = cnt * cnt * cnt;
	
	if(k % 2 == 0){
		ans += cnt_2 * cnt_2 * cnt_2;
	}

	cout << ans << endl;
}