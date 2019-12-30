#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

char f[55][55];
int  ans[55][55];

int main(){
	int h,w;
	cin >> h >> w;
	for(int i = 0; i < h; i++){
		for(int j =0; j < w; j++){
			cin >> f[i][j];
		}
	}

	for(int i = 0; i < h; i++){
		for(int j =0; j < w; j++){
			int cnt = 0;
			if(f[i][j] != '#'){
				for(int dir = 0; dir < 8; dir++){
					int nx = i + dx[dir];
					int ny = j + dy[dir];
					if(nx < 0 || nx >= h || ny < 0 || ny >= w){
						continue;
					}
					if(f[nx][ny] == '#'){
						cnt++;
					}
				}
				ans[i][j] = cnt;
			}else{
				ans[i][j] = 10;
			}
		}
	}

	for(int i = 0; i < h; i++){
		for(int j =0; j < w; j++){
			if(ans[i][j] != 10){
				cout << ans[i][j];
			}else{
				cout << "#";
			}
		}
		cout << endl;
	}


}