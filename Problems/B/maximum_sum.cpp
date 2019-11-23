#include <bits/stdc++.h>

using namespace std;

int main(){
	std::vector<int> N(3);
	for(int i = 0; i < 3; i++)
		cin >> N[i];
	
	int k;
	cin >> k;

	sort(N.begin(), N.end(), greater<int>());
	int ans = N[0];
	for(int i = 0; i < k; i++){
		ans *= 2;
	}

	cout << ans + N[1] + N[2] << endl;
}