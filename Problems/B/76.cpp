#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int ans = 1;
    for(int i = 0; i < n; i++){
        int bai = ans * 2;
        int sum = ans + k;
        if(bai > sum){
            ans = sum;
        }else{
            ans = bai;
        }
    }   
    cout << ans << endl;
}