#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, m;
	cin >> n;
	vector<string>S(n);
	for(int i = 0; i < n; i++){
		cin >> S[i];
	}
	cin >> m;
	vector<string>T(m);
	for(int i = 0; i < m; i++){
		cin >> T[i];
	}

	int ans = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(S[i] == S[j]){
				cnt++;
			}
		}
		for(int k = 0; k < m; k++){
			if(S[i] == T[k]){
				cnt--;
			}
		}
		ans = max(ans , cnt);
	}

	cout << ans << endl;
}