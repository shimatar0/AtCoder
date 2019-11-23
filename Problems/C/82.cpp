#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	map<int , int> mp;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		mp[temp]++;
	}

	int ans = 0;
	for(auto x : mp){
		int X = x.first;
		int Y = x.second;
	
		if(X < Y){
			ans += Y - X;
		}else if(X > Y){
			ans += Y;
		}
	}

	cout << ans << endl;
}