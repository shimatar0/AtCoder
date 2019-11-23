#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ios>
#include <iomanip>
#include <map>

using namespace std;

int main(){
    int N, M; cin >> N >> M;
    vector<int>ken[100005];
    int P[100000], Y[100000];
    for(int i = 0; i < M; i++){
        cin >> P[i];
        cin >> Y[i];
        ken[P[i]].push_back(Y[i]); 
    }
    for(int j = 0; j < N; j++){
        sort(ken[j+1].begin(),ken[i+1].end());
    }

    for(int k = 0; k < M; k++){
        cout << 
    }
}