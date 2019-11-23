#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int r, D, X[11];

    cin >> r >> D >> X[0];

    for(int i = 1; i <= 10; i++){
        int ans;
        ans  = (r * X[i - 1]) - D;
        X[i] = ans;
        cout << ans << endl;
    }    
}