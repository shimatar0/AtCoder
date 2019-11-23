#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int V[25], C[25];

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> V[i];
    }
    for(int j = 0; j < N; ++j){
        cin >> C[j];
    }

    int v_sum = 0;
    int c_sum = 0;
    int Max   = 0;
    for(int bit = 0; bit < (1<<N); ++bit){
        v_sum = c_sum = 0;
        
        for(int i = 0; i < N; ++i){
            if(bit & (1<<i)){
            v_sum += V[i];
            c_sum += C[i];
            }    
            Max = max(Max , (v_sum - c_sum));
        }
    }

    cout << Max << endl;
}