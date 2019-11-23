#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for(int i = 1; i <= n; i+=2){
		cnt++;
	}

	if(cnt >= k) cout << "YES" << endl;
	else cout << "NO" << endl;
}