#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin >> n;
	ll N = sqrt(n);

//	cout << N << endl;
	ll ans = 1001001001001; 
	for(ll i = 1; i <= N; i++){
		if(n % i == 0){
			ll temp = n / i;
			ans = min(ans, temp + i - 2);
		}
	}

	cout << ans << endl;
}