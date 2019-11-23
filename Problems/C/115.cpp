#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> H(n);
	for(int i = 0; i < n; i++){
		cin >> H[i];
	}
	sort(H.begin(), H.end());
	int ans = 1001001001;
	for(int i = 0; i+k-1 < n ; i++){
		int temp = H[i+k-1] - H[i];
//		cout << temp << endl;
		ans = min(ans , temp);
	}

	cout << ans << endl;
}