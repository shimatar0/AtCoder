#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    int T, A;
    cin >> T >> A;
    int ans = 1 << 30;
    int f = 0;
    for(int i = 0; i < N; i++){
        int H, temp;
        cin >> H;
        temp = (T * 1000 - H * 6) - A * 1000;
        if(temp < 0) temp = -temp;
        if(ans > temp){
            f = i+1;
            ans = temp;
        }
    }
    cout << f << endl;
}