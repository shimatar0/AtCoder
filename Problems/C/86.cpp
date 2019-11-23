#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> T(n+1), X(n+1), Y(n+1), temp(n+1);
	T[0] = X[0] = Y[0] = temp[0] = 0;
	for(int i = 1; i <= n; i++){
		cin >> T[i] >> X[i] >> Y[i];
		temp[i] = X[i] + Y[i];
	}

	for(int i = 0; i < n; i++){
		int time = T[i+1] - T[i];
		int d = abs(temp[i+1] - temp[i]);
		if(time < d){
			cout << "No" << endl;
			return 0;
		}else{
			if(d % 2 != time % 2){
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
}