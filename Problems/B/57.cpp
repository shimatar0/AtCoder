#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    vector< pair <int , int> > ga(n);
    vector< pair <int , int> > check(m);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        ga[i].first = a;
        ga[i].second = b;   
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        check[i].first = a;
        check[i].second = b;   
    }
    for(int i = 0; i < n; i++){
        int ans = 1001001001;
        int out;
        for(int j = 0; j < m; j++){
            int dist;
            dist = abs((ga[i].first - check[j].first)) + abs((ga[i].second - check[j].second));
//            cout << "dist" << dist << endl;
            if(dist < ans){
                ans = dist;
                out = j;
            }
        }
        cout << out + 1 << endl;
    }
}
