#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> L(n);
	for(int i = 0; i < n; i++){
		cin >> L[i];
	}
	sort(L.begin(), L.end());
	int ans = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			int ab = L[i] + L[j];
			int k = lower_bound(L.begin(), L.end(), ab) - L.begin();
			ans += max(k - (j+1), 0);
		}
	}

	cout << ans << endl;
}