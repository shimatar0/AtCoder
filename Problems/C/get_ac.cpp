#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>h(n),a(q);
    h[0] = 0;
    for(int i = 0; i < n - 1; i++){
        if(i != 0){
            h[i+1] = h[i];
        } 
        if(s[i] == 'A' && s[i+1] == 'C'){
            h[i+1]++;
        }
    }




    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        a[i] = h[r-1] - h[l-1]; 
    }

   for(int i = 0; i < q; i++) cout << a[i] << endl;    


}