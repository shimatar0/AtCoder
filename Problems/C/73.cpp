#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    map<int,int> mp;

    for(auto v : a){
        mp[v]++;                
    }

    int ans = 0;

    for(auto v : mp){
        if(v.second % 2 != 0){
            ans++;
        }
    }

    cout << ans << endl;
}