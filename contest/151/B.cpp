#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int>A(n);
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        cin >> A[i];
        sum += A[i];
    }
    int ans = (m * n) - sum;
    if(ans > k){
        cout << "-1" << endl;
    }else if(ans > 0){
        cout << ans << endl;
    }else{
        cout << "0" << endl;
    }
}