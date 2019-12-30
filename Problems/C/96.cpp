#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char c[55][55];

int main() {
    int h, w;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    cin >> h >> w;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> c[i][j];
        }
    }

  bool flag = false;
  int ans = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char now = c[i][j]; 
            flag= false;
                if(now == '#'){
                    for(int k = 0; k < 4; k++){
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(nx < 0 || ny < 0 || nx >= h || ny >= w){
                            continue;
                        }
                        if(flag) continue;
                        if(c[nx][ny] == now ){
                            flag = true;
//                            cout << i << j << endl;
//                            cout << nx << ny << endl;
                        }
                    }
                    if(!flag){
//                        cout << i << j << endl;
                       ans++;
                    }
                }          
        }

    }

    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}