#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int h , w, n;
    cin >> h >> w >> n;
    vector<vector<char>> field (h+1, vector<char>(w+2) );
    for(int i = 0; i <= h; i++){
        for(int j = 0; j <= w + 1; j++){
            if(i == 0 || j == 0 || j == w + 1){
                field[i][j] = '#';
            }else{
                field[i][j] = '.';
            }
        }
    }
    
    for(int i = h; i >= 0; i--){
        for(int j = 0; j <= w+1; j++){
            cout << field[i][j];
        }
        cout << endl;
    }


    for(int i = 0; i < n; i++){
        int x, y, st;
        cin >> x >> y >> st;
        vector<vector<char>> block (x, vector<char>(y) );
        bool flag = false;
        for(int j = h; j <= 0; j--){
            for(int k = st + 1; k <= x; k++){
                if(field[j][k] != '#'){
                    flag = true;
                }else{
                    flag= false;
                    continue;
                }
            }
            if(flag = true)
        }

        if(flag = true){

        }
    }

}