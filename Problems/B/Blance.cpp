#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int W[105];
    for(int i= 0; i < N; ++i){
        cin >> W[i];
    }
    
    int pre = 0; 
    int back = 0;
    int ans = 999999;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j < i; j++){ 
            pre += W[j];
        }
    
        for(int k = i; k < N; k++){
            back += W[k];
        }

        
        if(ans > abs(pre - back)){
            ans = abs(pre - back);
        }

        pre = 0;
        back = 0;
    }

    cout << ans << endl;
}