#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	string s;
	cin >> s;
	bool flag = true;

	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0){
			if(s[i] == 'R' || s[i] == 'U' ||s[i] == 'D'){
				flag = true;
			}else{
				flag = false;
				break;
			}
		}

		if(i % 2 != 0){
			if(s[i] == 'L' || s[i] == 'U' ||s[i] == 'D'){
				flag = true;
			}else{
				flag = false;
				break;
			}
		}
	}

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;	
}