#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    int D[100005];
    for(int i = 0; i < N; i++){
        cin >> D[i];
    }
    int ans = 0;
    sort(D, D + N);

    if(N % 2 == 0){
        if( D[N / 2 - 1] != (D[N / 2]) ){
            ans =  D[N / 2] - D[N / 2 - 1];
        } 
    }
    cout << ans << endl;
}