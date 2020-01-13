#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
const int INF = 1001001001;

int n, k;
int a[20];

bool dfs(int i , int sum){
   if(i == n){
        cout << sum << endl;
        return (sum == k);
    }
   if(dfs(i + 1, sum)){
       cout << sum << endl; 
       return true;
    }
    if(dfs(i + 1, sum + a[i])){
        cout << sum << endl;
        return true;
    }
   return false;
}

int main(){
   cin >> n >> k;
   rep(i, n) cin >> a[i];
   if(dfs(0, 0)){
        cout<< "Yes" << endl;
   }else{
        cout << "No" << endl;
   }
}
