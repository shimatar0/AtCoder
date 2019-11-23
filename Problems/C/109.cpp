#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		a[i] = abs(x - tmp);
	}
	sort(a.begin(), a.end());

	int ans = gcd(a[0] , a[1]);

	for(int i = 2; i < n; i++){
		ans = gcd(ans , a[i]);
	}
	cout << ans << endl;
}