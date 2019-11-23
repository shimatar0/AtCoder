#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin >> N;
    double A[1005];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    double ans = 0;
    for(int j = 0; j < N; j++){
        ans += 1 / A[j];
    }
    cout << 1 / ans << endl;
}