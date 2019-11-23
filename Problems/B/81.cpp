#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> A(n);
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
		
	int ans = 0;
	bool flag = false;

	while(1){
		for(int i = 0; i < n; i++) {
			if(A[i] % 2 == 0) {
				A[i] /= 2;
			}else{
				flag = true;
			}
		}
		if(flag) break;
		ans++;
	}

	cout << ans << endl;
}