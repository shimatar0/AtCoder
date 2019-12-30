#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll num = 1000000000 + 7;
    ll n; cin >> n;
    int x = n;
    n = 1;
    for(int i = 2; i <= x; i++){
        n = n * i;
        n = n % num;
//        cout << n << endl;
    }    
    cout << n << endl;
}