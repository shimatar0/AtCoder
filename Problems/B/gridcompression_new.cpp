#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    string grid[105];
    bool ok_x[110], ok_y[110];
    for(int i = 0; i < x; i++){
        cin >> grid[i];
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(grid[i][j] == '#'){
                ok_x[i] = true;
                ok_y[j] = true;
            }
        }
    }

    for(int i = 0; i < x; i++){
        if(ok_x){
            for(int j = 0; j < y; j++){
                if(ok_y) cout << grid[i][j];
            }
        }
    }
    cout << endl;
}