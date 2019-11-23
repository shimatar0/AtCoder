#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;

    string hantei = {'A', 'C', 'G', 'T'};
    int Max = 0;
    int count = 0;
    bool flag = false;
    for(int i = 0; i < S.length(); i++){
        for(int j = 0; j < hantei.length(); j++){
            if(S[i] == hantei[j]){
                flag = true;
                count++;
                Max = max(Max, count);
            }
        }
        if(!flag) count = 0;
        flag = false;
    }
    cout << Max << endl;
}