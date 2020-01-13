#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
const int INF = 1001001001;

const int di[4] = {-1, 0 , 1, 0};
const int dj[4] = {0, -1 , 0, 1 };
typedef pair<int, int> P;

int main(){
    int h, w;
    int ans = 0;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    rep(si, h)rep(sj,w){
        if(s[si][sj] == '#') continue;
        vector<vector<int>> dist(h, vector<int>(w, INF));
        queue<P> q;
        auto update = [&](int i, int j, int x){
            if(dist[i][j] != INF) return;
            dist[i][j] = x;
            q.push(P(i,j));
        };
        update(si, sj, 0);
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            rep(dir, 4){
                int ni = i + di[dir];
                int nj = j + dj[dir];
                if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if(s[ni][nj] == '#') continue;
                update(ni, nj, dist[i][j] + 1);
            }
        }
        rep(i, h)rep(j,w){
            if(dist[i][j] == INF) continue;
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans << endl;
}
