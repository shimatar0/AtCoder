#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	int n; cin >> n;
	int data[] = {100, 101, 102, 103, 104, 105};
    vector<int> S;
	
	for (int bit = 0; bit < 64; ++bit) {
            int sum = 0;
            for (int i = 0; i < 6; ++i) {
                if (bit & (1<<i)) { // i が bit に入るかどうか
                	sum += data[i];
                }
            }
            S.push_back(sum);
    }
 
    S.push_back(302);
    S.push_back(301);
 	
 	for(int j = n; j >= 100; j-= 100){
    for(int i = 1; i < S.size(); i++){
    	if(j % S[i] == 0){
    		cout << "1" << endl;
    		return 0;
    	}
    }
	}
    cout << "0" << endl;
}