#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
const int INF = 1001001001;

const int di[4] = {-1, 0 , 1, 0};
const int dj[4] = {0, -1 , 0, 1 };

vector<vector<char>>f(10,vector<char>(10));
vector<vector<char>>check(10,vector<char>(10));

void dfs(int i, int j){
    check[i][j] = 'x';

    rep(dir, 4){
        int ni = i + di[dir];
        int nj = j + dj[dir];

        if(ni < 0 || ni >= 10 || nj < 0 || nj >= 10) continue;
        if(f[ni][nj] == 'x') continue;

        if(check[ni][nj] == 'x') continue;

        dfs(ni, nj);
    }
}

bool che(){
    rep(i, 10) rep(j, 10){
        if(check[i][j] == 'o'){
            return false;
        }
    }
    return true;    
}

int main(){
    rep(i, 10)rep(j, 10){
        cin >> f[i][j];
    }
    rep(si,10)rep(sj,10){
            int ng = 0;
            bool flag;
            check = f;

            dfs(si,sj);
            flag = che();
            if(flag){
                cout << "YES" << endl;
                return 0;
            }
        }
    cout << "NO" << endl;
}