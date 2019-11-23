#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int>a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	if((n-1) % (k-1) == 0){
		cout << (n-1) / (k-1) << endl;
	}else{
		int ans = (n - 1) / (k - 1);
		cout << ans + 1 << endl;
	}
}