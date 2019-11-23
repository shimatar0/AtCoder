#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int x_max = -1;
    int y_min = 10000; 

    for(int i = 0; i < n; i++){
        int temp; 
        cin >> temp;
        x_max = max(x_max, temp);
    }
    for(int j = 0; j < m; j++){
        int temp;
        cin >> temp;
        y_min = min(y_min, temp);
    }

    bool flag = false;
    int z;
    if(x < y){
        for(int i = x+1; i <= y; i++){
            if(x_max < i && i <= y_min){
                flag = true;
                break;
            }
        }
    }
    
    if(flag) cout << "No War" << endl;
    else cout << "War" << endl; 
}
