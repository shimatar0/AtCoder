#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N; cin >> N;
    vector<int>H(N);
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    sort(H.begin(),H.end(),greater<int>());
    int sum = 0;
    for(int j = 0; j < N; j++){
        if(j == 0){
            sum += H[j] / 2;
        }else{
            sum += H[j];
        }
    }
    cout << sum << endl;    
}