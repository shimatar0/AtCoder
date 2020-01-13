#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool primeNumber(ll n){
    if(n < 2) return false;
    else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}

int main(){
    ll x;
    cin >>  x;
    ll ans = 0;

    for(;;){
        if(primeNumber(x)){
            ans = x;
            break;
        }
        x++;
    }
    cout << ans << endl;
}