#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    int k;
    int r, s, p;
    cin >> n >> k;
    cin >> r >> s >> p;
    string t; cin >> t;
    vector<char>before(n-1);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        int mod = i % k;
        if(before[mod] != t[i]){
            if(t[i] == 'r'){
//                cout << "a" << endl;
                ans += p;
            }else if(t[i] == 's'){
//                cout << "k" << endl;
                ans += r;
            }else{
//                cout << "j" << endl;
                ans += s;
            }
            before[mod] = t[i];
        }else{
            before[mod] = 'a';
        }
    }
    cout << ans << endl;
}