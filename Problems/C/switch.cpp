#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, m; cin >> n >> m;
	vector<vector<int>> v(m);

	for(int i = 0; i < m; i++){
		int k;
		cin >> k;
		for(int j = 0; j < k; k++){
			int temp;
			cin >> temp; temp--;
			v[i].push_back(temp);
		}
	}

	vector<int> p(m);
	for(int i = 0; i < m; i++){
		cin >> p[i];
	}

	int ans = 0;
	
	for(int bit = 0; bit < (1 << n); ++bit){
		int con;
		for(auto v : v[i]){
			if(bit & (1<<v)) con++; 
		}
		if(con % 2 != p[i]) 
	}
}