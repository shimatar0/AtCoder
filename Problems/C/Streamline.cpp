#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N , M;
    cin >> N >> M;
    int X[100000];

    for(int i = 0; i < M; i++){
        cin >> X[i];
    }

    sort(X, X + M);

    int diff[100000];
    for(int j = 0; j < M - 1; j++){
        diff[j] = abs(X[j] - X[j + 1]);
    }

    sort(diff , diff + (M-1), greater<>());
/*
    for(int j = 0; j < M-1; j++){
        cout << diff[j] << endl;
    }
*/ 
    int sum = 0;

    if(N < M){
        if(N > 1){
            int sts = N - 1;
            for(int k = sts; k < M -1; k++){
                sum += diff[k];
            }
        }else{
            for(int k = 0; k < M -1; k++){
                sum += diff[k];
            }
        }
    }else{
        cout << "0" << endl;
    }

    if(sum != 0 )
        cout << sum << endl;

}
