#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b; 
	cin >> a >> b;
	string s;
	cin >> s;

	bool flag = true;

	if(s[a] != '-'){
		cout << "No" << endl;
		return 0;
	}

	for(int i = 0; i <= (a + b); i++) {
		flag = false;
		if(i != a){
			int temp = s[i] - '0';
//			cout << temp << endl;
			for(int j = 0; j <= 9; j++){
				if(temp == j) flag = true;
			}
		}else{
			flag = true;
		}
		if(flag == false){
//			cout << i << endl;
			break;
		}
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;

}