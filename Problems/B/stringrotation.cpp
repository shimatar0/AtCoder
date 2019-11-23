#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;

    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }   

    for(int i = 0; i < s.length(); i++){
        
        char temp = s[s.length() - 1];
        s.pop_back();
        s = temp + s;

        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}