#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	int sum = 0;
	cin >> n >> x;
	vector<int>M(n);
	for(int i = 0; i < n; i++){
		cin >> M[i];
		sum += M[i];
	}

	x -= sum;
	int ans = n;
	sort(M.begin(), M.end());
	int min = M[0];

	while(x >= min){
		x -= min;
		ans++;
	}

	cout << ans << endl;
}