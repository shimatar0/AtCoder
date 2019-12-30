#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;

	string s_rev = s;
	reverse(s_rev.begin(), s_rev.end());

	int cnt;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s_rev[i]){
			cnt++;
		}
	}

	cout << cnt / 2 << endl;
}