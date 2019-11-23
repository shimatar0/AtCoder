#include <bits/stdc++.h>

using namespace std;

int main(){
	int d, n;
	cin >> d >> n;
	long long ans;
	if(d == 0){
		if(n != 100){
			cout << n << endl;
		}else if(n == 100){
			cout << "101" << endl;
		}
	}else if(d == 1){
		if( n == 100){
			cout << 100 * 101 << endl;			
		}else{
			cout << 100 * n << endl;
		}
	}else if(d == 2){
		if(n == 100){
			cout << 10000 * 101<< endl;
		}else{
			cout << 10000 * n << endl;
		}
	}
}