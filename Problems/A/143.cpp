#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int a, b;
	cin >> a >> b;

	if(2 * b >=  a){
		cout << "0" << endl;
	}else{
		cout << a - 2 * b << endl;
	}
}