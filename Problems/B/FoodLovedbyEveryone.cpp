#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N ,M;
    cin >> N >> M;
    u_int ans = 0;
    for(int i = 0; i < N; i++){
        int k; cin >> k;
        u_int temp = 0;
        for(int j = 0; j < k; j++){
            int bit;
            cin >> bit;
            temp = temp | (1 << bit);
//            cout << temp << endl;
        }
        
        if(i == 0) ans |= temp;
        else ans &= temp;
//            cout << "ans" << ans << endl;
    }
    
    int count = 0;
//    printf("%d\n", ans);
    for(int k = 0; k <= M; k++){
        if( ans & (1 << k)){
            count++;
        }
    }

    cout << count << endl;        
}