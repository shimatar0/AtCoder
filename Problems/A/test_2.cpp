#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>s(n),t(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        reverse(s[i].begin() , s[i].end());
        t[i] = s[i];
    }
    
    
    for(int j = 0; j < n; j++){
        if(t[j][0] == 'o' || t[j][0] == 'x' || t[j][0] == 's'){
            reverse(t[j].begin(), t[j].end());
            t[j] += "es";
            cout << t[j] << endl;
        }else if(t[j][0] == 'h'){
            if(t[j][1] == 's' || t[j][1] == 'c'){
                reverse(t[j].begin(), t[j].end());
                t[j] += "es";
                cout << t[j] << endl;
            }else{
                reverse(t[j].begin(), t[j].end());
                t[j] += "s";
                cout << t[j] << endl;
            }
        }else if(t[j][0] == 'f'){
            t[j].erase(0,1);
            reverse(t[j].begin(), t[j].end());
            t[j] += "ves";
            cout << t[j] << endl;
        }else if(t[j][0] == 'e'){
            if(t[j][1] == 'f'){
                t[j].erase(0,2);
                reverse(t[j].begin(), t[j].end());
                t[j] += "ves";
                cout << t[j] << endl;
            }else{
                reverse(t[j].begin(), t[j].end());
                t[j] += "s";
                cout << t[j] << endl;                
            }
        }else if(t[j][0] == 'y'){
            if(t[j][1] != 'a' && t[j][1] != 'i' && t[j][1] != 'u' && t[j][1] != 'e' && t[j][1] != 'o'){
                t[j].erase(0,1);
                reverse(t[j].begin(), t[j].end());
                t[j] += "ies";
                cout << t[j] << endl;
            }else{
                reverse(t[j].begin(), t[j].end());
                t[j] += "s";
                cout << t[j] << endl;
            }
        }else{
            reverse(t[j].begin(), t[j].end());
            t[j] += "s";
            cout << t[j] << endl;
        }


    }
}