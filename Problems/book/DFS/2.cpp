#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
const int INF = 1001001001;

const int di[4] = {-1, 0 , 1, 0};
const int dj[4] = {0, -1 , 0, 1 };
typedef pair<int, int> P;

char f[505][505];
bool check[505][505];

int h, w;

void dfs(int i, int j){
    check[i][j] = true;

    rep(dir, 4){
        int ni = i + di[dir];
        int nj = j + dj[dir];

        if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if(f[ni][nj] == '#') continue;

        if(check[ni][nj]) continue;

        dfs(ni, nj);
    }
}

int main(){
    int si,sj,gi,gj;
    cin >> h >> w;
    rep(i,h)rep(j,w){
        cin >> f[i][j];
        if(f[i][j] == 's'){
            si = i;
            sj = j;
        }
        if(f[i][j] == 'g'){
            gi = i;
            gj = j;
        }
    }
    dfs(si,sj);
    if(check[gi][gj]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
