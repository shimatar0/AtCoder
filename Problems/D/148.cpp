#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int ans = 0;
    int now_num = 1;
    for(int i = 0; i < n; i++){
        if(A[i] == now_num){
            now_num++;
        }else{
            ans++;
        }
    }
    if(now_num > 1){
        cout << ans << endl;
    }else{
        cout << "-1" << endl;
    }
}