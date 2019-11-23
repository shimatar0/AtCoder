#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>H(N);
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    int ans = 0;
    int hantei = 0;
    for(int i = N-1; i >= 1; i--){
        if(H[i] <= H[i-1]){
            hantei++;
        }else{
            hantei = 0;
        }
        ans = max(ans , hantei);
    }

    cout << ans << endl;
}