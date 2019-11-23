#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s.size() << endl;
    bool flag = false;
    
    if(s[0] == 'A'){
        flag = true;
    }else{
        cout << "WA" << endl;
        return 0;
    }

    int cnt = 0;
    for(int i = 2; i <= s.length() - 2; i++){
        if(s[i] == 'C') cnt++;
    }
    if(cnt == 1) flag = true;
    else{
        cout << "WA" << endl;
        return 0;
    }
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])) { // cが大文字のとき
            count++;
        }
    }
    if(count == 2){
        flag = true;
    }else{
        flag = false;
        cout << "WA" << endl;
        return 0;
    }

    if(flag) cout << "AC" << endl;
}