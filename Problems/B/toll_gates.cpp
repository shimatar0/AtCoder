#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	std::vector<bool> A(m);
	for(int i = 0; i < m; i++){
		int tmp;
		cin >> tmp;
		A[tmp] = 1;
	}

	int front, back;
	front = back = 0;

	for(int i = 0; i < x; i++){
		if(A[i]) front++;
	}
	for(int i = x + 1; i < n; i++){
		if(A[i]) back++;
	}

	int ans = min(front, back);

	cout << ans << endl;
}