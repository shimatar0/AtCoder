#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    map<int , int > mp;
    for(auto &x : A){
        mp[x-1]++;
        mp[x]++;
        mp[x+1]++;
    } 
    int ans = 0;
    for(auto x : mp){
        ans = max(ans, x.second);
    }

    cout << ans << endl;
}