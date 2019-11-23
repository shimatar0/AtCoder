#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int gcd(int a, int b){
    return b ? gcd(b,a % b) : a;
}

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> left(n+1, 0), right(n+1, 0);
    for (int i = 0; i < n; ++i) left[i+1] = gcd(left[i], a[i]);
    for (int i = n-1; i >= 0; --i) right[i] = gcd(right[i+1], a[i]);

    int ans = 0;

    for(int i = 0; i < n; i++){
        int l,r;
        l = left[i];
        r= right[i + 1];

        ans = max(ans, gcd(l, r));
    }

    cout << ans << endl;
}