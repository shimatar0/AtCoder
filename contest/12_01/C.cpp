#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	int data[] = {100, 101, 102, 103, 104, 105};

	for(int i = 0; i <= 1000; i++){
		for(int j = 0; i * 100 <= 100000; j++){
			for(int k = 0; (j*101 + i*100) <= 100000; k++){
				for(int l = 0; (j*101 + i*100 + k*102) <= 100000; l++){
					for(int m = 0; (j*101 + i*100 + k*102 + l*103) <= 100000; m++){
						for(int x = 0; (j*101 + i*100 + k*102 + l*103 + m * 104) <= 100000; x++){
								if((j*101 + i*100 + k*102 + l*103 + m * 104 + x*105) == n){
									cout << "1" << endl;
									return 0;
							}
						}
					}
				}
			}
		}
	}
}
