#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	vector< pair <int , int> > pair(n);
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		pair[i].first = temp;
		pair[i].second = i + 1;
	}

	sort(pair.begin(), pair.end());

	for(int i = 0; i < n; i++){
		cout << pair[i].second << " ";
	}
	cout << endl;
}