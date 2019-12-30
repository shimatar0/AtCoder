#include <bits/stdc++.h>

using namespace std;

int ans[26];

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());

    string a = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < 26; j++){
            if(s[i] == a[j]){
                ans[j] = 1;    
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(ans[i] == 0){
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}