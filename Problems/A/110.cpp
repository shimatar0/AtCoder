#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	vector<int>n(3);
	for(int i = 0; i < 3; i++){
		cin >> n[i];
	}

	sort(n.begin(), n.end(),greater<int>());

	int ans = n[0] * 10 + n[1] + n[2];

	cout << ans << endl;
}