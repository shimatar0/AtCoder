#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	string s;
	cin >> s;

	bool flag = false;
	int cnt = 0;

	for(int i = 0; i < n - 1; i++){
		if(s[i] == s[i + 1]){
			flag = true;
		}else{
			flag = false;
		}
		if(flag == false){
			cnt++;
		}
	}

	cout << cnt + 1 << endl;
}