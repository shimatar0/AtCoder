#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string s,cp_s;
    cin >> s;
    cp_s = s;
    int count_1,count_2;
    count_1 = count_2 = 0;
    //1start
    for(int i = 0; i < s.size() - 1; i++){
        if(i == 0){
            if(s[0] == '0'){
                s[0] = '1';
                count_1++;
            }
        }
        if(s[i] == s[i+1]){
            if(s[i+1] == '1') s[i+1] = '0';
            else s[i+1] = '1';
            count_1++;
        }
    }
    //0スタート
    for(int i = 0; i < cp_s.size() - 1; i++){
        if(i == 0){
            if(cp_s[i] == '1'){
                cp_s[0] = '0';
                count_2++;
            }
        }
        if(cp_s[i] == cp_s[i+1]){
            if(cp_s[i+1] == '1') cp_s[i+1] = '0';
            else cp_s[i+1] = '1';
            count_2++;
        }
    }
//    cout << count_1 << cp_s << endl;
    int ans = min(count_1, count_2);
    cout << ans << endl;    
}