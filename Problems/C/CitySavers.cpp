#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;    
    long A[100005];
    long B[100005];

    for(int j = 0; j <= N; j++){
        cin >> A[j];
    }
    for(int k = 0; k < N; k++){
        cin >> B[k];
    }
    long ans = 0;
    
    for(int i = 0; i < N; i++){
        long Min;
        Min = min(A[i], B[i]);
        ans += Min;
        A[i] -= Min;
        B[i] -= Min;
        long right;
        right = min(A[i+1], B[i]);
        ans += right;
        A[i+1] -= right;
        B[i]   -= right;
    }
    cout << ans << endl;
}