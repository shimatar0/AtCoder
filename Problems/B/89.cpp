#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	char c;

	bool flag = false;
	for(int i = 0; i < n ; i++){
		cin >> c;
		if(c == 'Y'){
			flag = true;
		}
	}

	if(flag) cout << "Four" << endl;
	else cout << "Three" << endl;
}