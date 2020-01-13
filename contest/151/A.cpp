#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    string s = "abcdefghijklmnopqrstuvwxyz";
    char c;
    cin >> c;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(c == s[i]){
            ans = i;
        }
    }
    cout << s[ans+1] << endl;
}