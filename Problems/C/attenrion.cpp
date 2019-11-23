#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	string s;
	cin >> s;
	vector<int> l_W(n+1, 0), l_E(n+1, 0), r_W(n+1, 0), r_E(n+1, 0);
	
	for(int i = 0; i < n; i++){
		if(s[i] == 'W'){
		 	l_W[i+1] = l_W[i] + 1;
		 	l_E[i+1] = l_E[i];
		}else{
			l_E[i+1] = l_E[i] + 1;
			l_W[i+1] = l_W[i];
		}
	}

	for(int i = n-1; i >= 0; i--){
		if(s[i] == 'W'){
		 	r_W[i] = r_W[i+1] + 1;
		 	r_E[i] = r_E[i+1];
		}else{
			r_E[i] = r_E[i+1] + 1;
			r_W[i] = r_W[i+1];
		}		
	}

	int ans = 1001001001;

	for(int i = 0; i < n; i++){
		int sum;
		if(s[i] == 'W'){
			int l = l_W[i];
			int r = r_E[i+1];
//			cout << l << r << endl;
			sum = l + r;
		}else{
			int l = l_W[i];
			int r = r_E[i+1];
//			cout << l << r << endl;
			sum = l + r;
		}		
		ans = min(ans , sum);
	}

	cout << ans << endl;
}