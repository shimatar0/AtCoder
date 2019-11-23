#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int> A(n), S(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	S = A;
	sort(S.begin(), S.end(), greater<int>());
	
	int chuo = n / 2;
//	cout << S[chuo-1] << endl;
	for(int i = 0; i < n; i++){
		if(S[chuo-1] <= A[i]){
			cout << S[chuo] << endl;
		}else{
			cout << S[chuo - 1] << endl;
		}
	}	
}