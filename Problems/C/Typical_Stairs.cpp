#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<bool>br(N + 1);
    for(int i = 0; i < M; i++){
        int temp;
        cin >> temp;
        br[temp] = 1;
    }
    vector<int>dp(N + 2);
    const int mod = 1000000007;
    dp[N] = 1;
    for(int i = N - 1; i >= 0; i--){
        if(br[i]){
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i+1] + dp[i+2]) % mod; 
    }
    cout << dp[0] << endl;
}