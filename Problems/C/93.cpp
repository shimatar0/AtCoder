#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int a, b, c;
	vector<int> A(3);
	for(int i = 0;i < 3; i++){
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int temp;
	int cnt = 0;

	if(A[0] % 2 == 0 && A[1] % 2 == 0 || A[0] % 2 != 0 && A[1] % 2 != 0){
		int temp = A[1] - A[0];
		cnt += temp / 2;
	}else{
		A[2]++;
		A[0]++;
		cnt++;
		temp = A[1] - A[0];
		cnt += temp / 2;
	}

	cnt += A[2] - A[1];

	cout << cnt << endl;
}