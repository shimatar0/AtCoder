#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; 
	cin >> n;
	vector<int>A(n);
	for(int i = 0; i < n; i++) cin >> A[i];
	ll ans = 0;
	for(int j = 0; j < n; j++){
		ans += A[j] - 1;
	}
	cout << ans << endl;
}