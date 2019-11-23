#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int L, R;
    cin >> L >> R;
    R = min(R, R + 4038);
    int ans = 2018;
    for(int i = L; i <= R; i++){
        for(int j = L+1; j <= R; j++){
//            cout << i << "*" << j << endl;
            ans = min(ans, (i * j) % 2019);
//            cout << "ans" << ans << endl;
        }
    }
    cout << ans << endl;
}