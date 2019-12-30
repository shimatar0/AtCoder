#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<ll>x(n);
	rep(i, n){
		cin >> x[i];
	}
	sort(x.begin(), x.end(),greater<ll>());

	ll first = 0;
	ll second = 0;

	int flag = 1;

	for(int i = 0; i < n - 1; i++){
//		cout << x[i] << endl;
		if(x[i] == x[i+1]){
			flag++;
		}else{
//			cout << x[i] << endl;
			flag = 1;
			continue;
		}

//		cout << flag << endl;

		if(flag == 4){
			if(first == 0){
				first = x[i+1];
				second = x[i+1];
			}else{
				second = x[i+1];
			}
		}

		if(flag == 2){
			if(first == 0){
				first = x[i+1];
			}else{
				second = x[i+1];
			}
		}

		if(first != 0 && second != 0){
			cout << first * second << endl;
			return 0;
		}
	}
	cout << "0" << endl;
}