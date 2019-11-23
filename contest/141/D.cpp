#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	vector<ll> A(n);
	for(int i = 0;i < n; i++){
		cin >> A[i];
	}

	for(int i = 0; i < m; i++){
		sort(A.begin(), A.end(), greater<int>());
		A[0] /= 2;
	}

	ll ans = 0;
	for(int i = 0; i < n; i++){
		ans += A[i];
	}

	cout << ans << endl;
}