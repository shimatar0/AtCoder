#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;

    for(int i = 1; i <= n; i++){
        int cnt = 0;
        if(i % 2 != 0){
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                    cnt++;
                }
            }
        }
        if(cnt == 8) ans++;
    }
    cout << ans << endl;
}