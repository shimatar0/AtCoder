#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	int l;
	cin >> l;
	vector<int>n(5);	
	for(int i = 0; i < l; i++){
		string s;
		cin >> s;
		if(s[0] == 'M'){
			n[0]++;
		}else if(s[0] == 'A'){
			n[1]++;
		}else if(s[0] == 'R'){
			n[2]++;
		}else if(s[0] == 'C'){
			n[3]++;
		}else if(s[0] == 'H'){
			n[4]++;
		}
	}

	ll ans = 0;
	for(int bit = 0; bit < (1<<5); bit++){
		int bitNum = 0;
		for(int i = 0; i < 5; i++){
			if(bit & (1 << i)) bitNum++;
		}
		if (bitNum != 3) continue;
	
		ll temp = 1;
		for(int k = 0; k < 5; k++){
			if(bit & (1 << k)){
				temp *= n[k];
			}
		}

		ans += temp;
	}

	cout << ans << endl;
}