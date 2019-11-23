#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll a, b, k;
	cin >> a >> b >> k;
	ll x = 0;
	for(int i = a; i <= b; i++){
		if(x < k || x > (b - a ) - k){
			cout << i << endl;
		}
		x++;
	}
}