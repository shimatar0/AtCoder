#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, m; cin >> n >> m;
    ll ans = 0;

    if(n * 2 >= m){
        ans = m / 2;
    }else{
        ll diff = m - 2 * n;
        ans = n + diff / 4;
    }
    cout << ans << endl;
}