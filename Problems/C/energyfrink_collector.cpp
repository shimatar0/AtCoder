#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector< pair <long , long> > pair(n);

	for(int i = 0; i < n; i++){
		cin >> pair[i].first >> pair[i].second;
	}

	long long ans = 0;
	sort(pair.begin(), pair.end());

	int j = 0;
	while(m != 0){
		if(pair[j].second <= m){
			ans += pair[j].first * pair[j].second;
			m -= pair[j].second;
		}else{
			ans += pair[j].first * m;
			m -= m;
		}
		j++;
	}

	cout << ans << endl;
}