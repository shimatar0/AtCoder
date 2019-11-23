#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n ,t;
    cin >> n >> t;
    int T[200005];
    for(int i = 0; i < n; i++){
        cin >> T[i];
    }
    int ans = 0;

    for(int i = 0; i < n-1; i++){
        if(T[i+1] - T[i] <= t){
            ans += T[i+1] - T[i];
        }
        else if(T[i+1] - T[i]> t){
            ans += t;
        }
    }
    ans += t;
    cout << ans << endl;

}