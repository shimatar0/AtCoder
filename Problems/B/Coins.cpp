#include <bits/stdc++.h>

using namespace std;

int main() {
	int ans = 0;
	int a, b, c;
	cin >> a >> b >> c;
	int x; cin >> x;
	for(int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if((i*500 + j*100 + k *50) == x) ans++;
			}
		}
	}
	cout << ans << endl;
}