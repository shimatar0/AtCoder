#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int main(){
	int n;
	cin >> n;
	vector<int>A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	int ans = gcd(A[0], A[1]);

	for(int i = 2; i < n; i++){
		ans = gcd(ans , A[i]);
	}

	cout << ans << endl;

}