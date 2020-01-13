#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
char f[25][25];
int INF = 1 << 30;

int main(){
    int h, w;
    cin >> h >> w;
    int ans = 0;

	for(int i = 0; i < h; i++){
		for(int j =0; j < w; j++){
			cin >> f[i][j];
		}
	}

    
    while (!q.empty()) {
        // qの先頭データを取り出す
        pair<int, int> p = q.front();
        int x = p.front;
        int y = p.second;

        // qの先頭を削除
        q.pop();
    queue<pair<int, int>> q;

    d[0][0] = 1;
    q.push({0, 0});
        // dx[4]とdy[4]を使って周囲4マスを見る
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 境界判定((nx, ny)が盤面に入っているか)
            if (nx >= 0 && nx < H && ny >= 0 && ny < W) {

                // 白マスかつ最短経路か判定
                if (S[nx][ny] != '#' && d[x][y] + 1 < d[nx][ny]) {

                    // 最短経路更新
                    d[nx][ny] = d[x][y] + 1;

                    // 「訪れるべき点」に追加
                    q.push({nx, ny});
                }
            }
        }
    }

}