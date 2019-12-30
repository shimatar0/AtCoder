#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector<int>a(n);
	rep(i , n){
		cin >> a[i];
	}

	int four_num = 0;
	int two_num = 0;
	for(auto x : a){
		if(x % 4 == 0) four_num++;
		if(x == 2) two_num++; 
	}


	if(two_num > 0){
		if((four_num) >= (n - four_num - two_num)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}else{
		if((four_num + 1) >= (n - four_num - two_num)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}