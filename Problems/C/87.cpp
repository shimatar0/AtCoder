#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> T(n), U(n);

	for(int i = 0; i < n; i++){
		cin >> T[i];
	}
	for(int i = 0; i < n; i++){
		cin >> U[i];
	}

	vector<int> U_sum(n), T_sum(n);

	T_sum[0] = T[0];
	U_sum[n-1] = U[n-1];

	for(int i = 1; i < n; i++){
		T_sum[i] = T_sum[i-1] + T[i];
	}

	for(int i = n-2; i >= 0; i--){
		U_sum[i] = U_sum[i+1] + U[i];
	}

	int ans = 0;


	for(int i = 0; i < n; i++){
		int temp_ans;
		temp_ans = T_sum[i] + U_sum[i]; 
		ans = max(ans, temp_ans);
	}

	cout << ans << endl;

}