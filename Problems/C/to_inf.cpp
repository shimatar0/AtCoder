#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	string s;
	cin >> s;
	ll k;
	cin >> k;

	char not_one_num;
	bool one_flag = true;
	for(int i = 0; i < k; i++){
		if(s[i] != '1'){
			not_one_num = s[i];
			one_flag = false;
			break;
		}
	}

	if(!one_flag){
		cout << not_one_num << endl;
	}else{
		cout << "1" << endl;
	}
}