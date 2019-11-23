#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N,T;
    cin >> N >> T;
    int cost = 1 << 30;
    int ans = 0;
    bool flag = false;
    for(int i = 0; i < N; i++){
        int c, t;
        cin >> c >> t;
        if(t <= T){
            flag = true;
            if(cost > c){
                cost = c;
            }
        }        
    }
    if(flag){
        cout << cost << endl;    
    }else{
        cout << "TLE" << endl;
    }
}