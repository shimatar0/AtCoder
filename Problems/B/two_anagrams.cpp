#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<string> S,T;

	string s, t;
	cin >> s;
	sort(s.begin(), s.end());

	cin >> t;
	sort(t.begin(), t.end());
	reverse(t.begin(), t.end());

	if(s < t) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
}
