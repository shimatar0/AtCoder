#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n,k; cin >> n >> k;
	int ans = 0;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(temp >= k) ans++;
	}
	cout << ans << endl;
}