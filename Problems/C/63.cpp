#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	vector<int>s(n);
	int sum =  0;
	rep(i , n){
		cin >> s[i];
		sum += s[i];
	}	
	sort(s.begin(),s.end());

	if(sum % 10 != 0){
		cout << sum << endl;
	}else{
		for(auto x : s){
			if(x % 10 != 0){
				cout << sum - x << endl;
				return 0;
			}
		}
		cout << "0" << endl;
	}
}