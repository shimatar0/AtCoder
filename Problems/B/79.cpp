#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<ll>L(n);
    L[0] = 2;
    L[1] = 1;
    for(int i = 2; i <= n; i++){
        L[i] = L[i-1] + L[i-2];
    }
    n += 1;
    cout << L[n] << endl;

}