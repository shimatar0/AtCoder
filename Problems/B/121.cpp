#include <bits/stdc++.h>

using namespace std;

int main() {
	string a, b; cin >> a >> b;
	string sum = a + b;
	int Sum = stoi(sum);

	for(int i = 1; i <= Sum; i++) {
		if(i*i == Sum){
			cout << "Yes" << endl;
			return 0;
		}	
	}
	cout << "No" << endl;
}