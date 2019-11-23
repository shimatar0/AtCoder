#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int>N(n);

	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		N[temp]++;
	}

	sort(N.begin(), N.end(),greater<int>());
	
	int sum_t = 0;

	for(int i = 0; i < k; i++){
//		cout << N[i] << endl;
		sum_t += N[i];
	}

	cout << n - sum_t << endl;
}