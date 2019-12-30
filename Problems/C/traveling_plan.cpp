#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int>A(n+2);
    A[0] = A[n+1] = 0;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
    
    ll  sum = 0;
    for(int i = 0; i <= n; i++){
        sum += abs(A[i] - A[i+1]);
    }
    for(int i = 1; i <= n; i++){
        int diff_1 = abs(A[i-1] - A[i]);
        int diff_2 = abs(A[i+1] - A[i]);
        int sum_num = abs(A[i-1] - A[i+1]);
        cout << sum - (diff_1 + diff_2) + sum_num << endl; 
    }
}