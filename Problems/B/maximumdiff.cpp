#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin >> n;
	std::vector<int> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	int Max = A[n-1];
	int Min = A[0];
	cout << Max - Min << endl;
}