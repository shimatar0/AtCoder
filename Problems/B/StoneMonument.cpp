#include <bits/stdc++.h>

using namespace std;

int main(){
	int a , b;
	cin >> a >> b;
	int diff = b - a;
	int a_num = 0;
	for(int i = 1; i < diff; i++){
		a_num += i;
	}
	cout << a_num - a << endl;
}