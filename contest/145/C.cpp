#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector< pair <double, double> > xy(n);

	for(int i = 0; i < n; i++){
		double x, y;
		cin >> x >> y;
		xy[i].first = x;
		xy[i].second = y;
	}

	vector<vector<double>>a(n);
	double ans_b = 0;
	for(int i = 0;i < n-1; i ++){
		for(int j = i+1; j < n; j++){
			ans_b += sqrt((xy[i].first - xy[j].first)*(xy[i].first - xy[j].first)+(xy[i].second - xy[j].second)*(xy[i].second - xy[j].second));
//			ans_b += a[i][j];
		}
	}

	double ans = (ans_b*2 / n);

	 cout << fixed << setprecision(10) << ans << endl;
}