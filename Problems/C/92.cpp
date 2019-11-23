#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> A(n), B(n),C(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	B = A;
	C = A;

	sort(B.begin(), B.end());
	sort(A.begin(), A.end(),greater<int>());

	int max_num = A[0];
	int sub_max = A[1];

	int min_num = B[0];
	int sub_min = B[1];

	for(int i = 0; i < n; i++){
		int Max = max_num;
		int Min = min_num;
		if(max_num > 0 && Max == C[i]){
			Max = sub_max;
		}

		if(min_num < 0 && Min == C[i]){
			Min = sub_min;
		}

		Max = max(0, Max);
		Min = min(0, Min);

		cout << Max * 2 + Min * 2 * (-1) << endl;

	}

}