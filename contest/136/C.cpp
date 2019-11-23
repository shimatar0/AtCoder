#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int H[1000000];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }

    for(int j = (N-1); j > 0; j--){
        if(H[j] < H[j-1]){
            H[j-1] -= 1;
        }
    }

    bool flag = true;
    int  cnt = 0;

    for(int k = 0; k < (N-1) ; k++){
        if(H[k] > H[k+1]){
            cnt++;
        }

        if(cnt > 0){
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
}