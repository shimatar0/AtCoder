#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int>x(n);
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	int ans = 1000000000;
	for(int i = 0; (i+k-1) < n; i++){
		int r = i;
		int l = i + k - 1;
		int r_temp = abs(x[r]) + abs(x[r] - x[l]);
		int l_temp = abs(x[l]) + abs(x[r] - x[l]);
		int temp_ans = min(r_temp, l_temp);
//		cout << i << ":" << temp_ans << endl;
		ans = min(ans, temp_ans);
	}

	cout << ans << endl;
}