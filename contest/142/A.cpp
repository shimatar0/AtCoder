#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	double sum = 0;
	double add = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 != 0) sum++;
		add++;
	}
		
		cout << sum / add << endl;
}