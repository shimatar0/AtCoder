#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;cin >> n;
	int keta = 0;

	while(n){
		n /= 10;
		keta++;
//		cout << n << endl;
	}

	cout << keta << endl;
}