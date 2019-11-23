#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int n;
    cin >> n;
    string S,hozon[105];
    bool flag = true;

    for(int i = 0; i < n; i++){
        char temp;
        cin >> S;
        if(i != 0 && temp != S[0]){ 
            flag = false;
        }
        for(int j = 0; j < i; j++){
            if(S == hozon[j]){
                flag = false;
            }
        }
        hozon[i] = S;
        temp = S[S.length()-1];
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}