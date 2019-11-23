#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define T 380000

int main(){
    int N;
    cin >> N;
    vector< pair<double, string> > pairs(N);
    double ans = 0;
    for(int i = 0; i < N; i++){
        cin >> pairs[i].first >> pairs[i].second;
        if(pairs[i].second == "JPY"){
            ans += pairs[i].first;
        }else{
            ans += pairs[i].first * T;
        }
    }

    cout << ans << endl;
}