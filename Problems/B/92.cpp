#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, d, x;
	cin >> n >> d >> x;
	vector<int> A(n);

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int temp = 0;
		int j= 1;
		ans++;
		temp = A[i] * j + 1;
		j++;
		while(temp <= d){
//			cout << temp << endl;
			temp = A[i] * j + 1;  
			ans++;
			j++;
		}
	}
	ans += x;
	cout << ans << endl;
}