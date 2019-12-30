#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int ans = 1;
	for(int i = 2; i <= sqrt(n); i++){
		int j = i;
		while(j * i <= n){
			ans = max(ans, j * i);
			j = j * i;
		}
	}

	cout << ans << endl;
}