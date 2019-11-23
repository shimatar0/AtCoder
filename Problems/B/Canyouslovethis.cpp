#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N , M , C;
    cin >> N >> M >> C;
    vector<int> B(M);
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }
    int temp_ans = 0;
    int ans = 0;
    for(int j = 0; j < N; j++){
        for(int k = 0; k < M; k++){
            int temp;
            cin >> temp;
            temp_ans += temp * B[k];
//            cout << temp_ans << endl;
        }
        temp_ans += C;
//        cout << temp_ans << endl;
        if(temp_ans > 0){
            ans++;
        }
        temp_ans = 0;
    }
    cout << ans << endl;
}