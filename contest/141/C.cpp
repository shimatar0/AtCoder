#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> S(n),A(q);

	int min_ans = k - q;

	for(int i = 0; i < q; i++){
		int tmp;
		cin >> tmp;
		S[tmp-1]++;
	}

	if(min_ans > 0){
		for(int i = 0; i < n; i++){
			cout << "Yes" << endl;
		}
	}else{
		for(int i = 0; i < n; i++){
			if(S[i] >= ((-1)*min_ans + 1)){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
	}

}