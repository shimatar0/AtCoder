#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i = a; i <= b; i++){
		int temp = i;
		vector<int> N(5);
		for(int j = 4; j >= 0; j--){
			N[j] = temp % 10; 
			temp = temp / 10;
		}
		
		if(N[0] == N[4] && N[1] == N[3]){
			ans++;
		}
	}

	cout << ans << endl;
}