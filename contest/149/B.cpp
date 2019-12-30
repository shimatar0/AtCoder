#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    if(a < k){
        ll diff = k - a;
        a = 0;
        b -= diff;   
    }else{
        a -= k;   
    }
    
    if(a < 0){
        a = 0;
    }
    if(b < 0){
        b = 0;
    }
    cout << a << " " << b << endl;

}