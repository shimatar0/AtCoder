#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll x; cin >> x;
    ll now = 0;
    ll time = 0;
    ll ans;
    for(;;){
        if((time * (time + 1) / 2) >= x){
            ans = x - now;
            break;
        }else{
            now += time + 1;
            time++;
        }
    }
    cout << ans << endl;
}