#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	string s;
	cin >> s;
	
	bool flag = false;

	if(n % 2 != 0){
		cout << "No" << endl;
		return 0;
	}else{
		for(int i = 0; i < n / 2; i++) {
			if(s[i] == s[n/2+i]){
				flag = true;
			}else{
				flag = false;
			}
			if(flag == false) break;
		}
	}

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}