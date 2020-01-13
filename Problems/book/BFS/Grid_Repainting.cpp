#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
const int INF = 1001001001;

const int di[4] = {-1, 0 , 1, 0};
const int dj[4] = {0, -1 , 0, 1 };
typedef pair<int, int> P;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }
    int white = 0;
    rep(i, h)rep(j, w){
        if(s[i][j] == '.') white++;
    }
    white -= 2;
    vector<vector<int>> dist(h, vector<int>(w, INF));
    queue<P> q;
    auto update = [&](int i, int j, int x){
        if(dist[i][j] != INF) return;
            dist[i][j] = x;
            q.push(P(i,j));
    };
    update(0, 0, 0);
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
    int distance = dist[h-1][w-1];
//    cout << white << " " << distance << endl;
    int ans = white - (distance - 1) ;
    if(dist[h-1][w-1] == INF){
        cout << "-1" << endl;
    }else{
        cout << ans << endl;
    }
}