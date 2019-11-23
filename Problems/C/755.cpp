#include <bits/stdc++.h>

using namespace std;

int cnt;
long long n;

void check(long long x){
	bool flag_1, flag_2, flag_3;
	flag_1 = flag_2 = flag_3 = false;

	do{
		int temp = x % 10;
		if(temp == 3){
			flag_1 = true;
		}
		if(temp == 5){
			flag_2 = true;
		}
		if(temp == 7){
			flag_3 = true;
		}
		if(flag_1 && flag_2 && flag_3){
		
			cnt++;
			
			break;
		}
		x = x / 10;
	}while(x != 0);
}

void dfs(long long x){
	if(n < x) return;
	check(x);
	dfs(x * 10 + 3);
	dfs(x * 10 + 5);
	dfs(x * 10 + 7);
}

int main(){

	cin >> n;
	dfs(0);	

	cout << cnt << endl;
}