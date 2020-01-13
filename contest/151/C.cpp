#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    vector< pair <int , string> > p(n);
    int ans = 0;
    int ng = 0;
    for(int i = 0; i< m ;i++){
        int q;
        string res;
        cin >> q >> res;
        if(res == "AC"){
            if(p[q-1].second != "AC"){
                ans++;
                ng += p[q-1].first;
                p[q-1].second = "AC";
            }
        }else{
            p[q-1].second == "WA";
            p[q-1].first++;
        }
    }
    cout << ans << " " << ng << endl;
}
