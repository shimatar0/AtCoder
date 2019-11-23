#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    char S[100];
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    S[K-1] = S[K-1] + 0x20;

    for (int j = 0; j < N; j++){
        cout << S[j]; 
    }
    cout << endl;
}