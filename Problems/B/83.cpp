#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;

	int ans = 0;

	for(int i = 1; i <= n; i++){
		int temp = i;
		int sum = 0;

		while(temp / 10 != 0){
			sum += temp % 10;
			temp /= 10;
		}

		sum += temp % 10;
		if(sum >= a && sum <= b){
			ans += i;
		}
	}

	cout << ans << endl;
}