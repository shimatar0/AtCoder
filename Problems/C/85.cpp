#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n;
	ll y;
	cin >> n >> y;

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n-i; j++){
			int temp = n - i - j;
			if(y == (10000 * i + 5000 * j + 1000 * temp)){
				printf("%d %d %d\n",i, j,temp);
				return 0;
			}
		}
	}

	cout << "-1" << " " << "-1" << " "<< "-1" << endl;
}