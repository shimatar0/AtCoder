#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	cin >> n;
	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < 26; j++){
			if(s[i] == a[j]){
				int temp = (j+n) % 26;
//				cout << temp << endl;
				cout << a[temp];
			}
		}
	}
	cout << endl;
}