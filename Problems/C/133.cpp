#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll L, R;
    cin >> L >> R;
    ll new_r = min(R, L + 4038);
    int ans = 2018;
    for(ll i = L; i <= new_r; i++){
        for(ll j = i + 1; j <= new_r; j++){
            int mod = (i * j) % 2019;
            ans = min(ans, mod);
        }
    }
    cout << ans << endl;  
}