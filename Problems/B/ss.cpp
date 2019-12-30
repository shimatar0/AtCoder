#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int len = s.length();

    int ans = 0;

    for(int i = len; i >= 2; i--){
//        cout << "i" << i << endl;
        if(i != len && i % 2 == 0){
            string l_s, r_s;
            for(int j = 0; j < i / 2; j++){
                l_s += s[j];
            }
            for(int k = i / 2; k < i; k++){
                r_s += s[k];
            }
//            cout << l_s << r_s << endl;
            if(l_s == r_s){
                ans = max(ans, i);
            }
        }
    }

    cout << ans << endl;

}