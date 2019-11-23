#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans[4] = {"maerd" , "esare" , "resare" , "remaerd"};
    reverse(s.begin(), s.end());
    size_t a = s.length();
    int i = 0;
    bool flag = true;
    while(i < a){
        /* dream */
        if(s[i] == 'm'){
            if(s.compare(i,5,ans[0]) == 0){
                i += 5;
            }else{
                flag = false;
                break;
            }
        }
        /* erase */
        if(s[i] == 'e'){
            if( s.compare(i,5,ans[1]) == 0){
                i += 5;
            }else{
                flag = false;
                break;
            }
        }
        /* eraser or dreamer */
        if(s[i] == 'r'){
            if(s.compare(i,6,ans[2]) == 0){
                i += 6;
            } else if(s.compare(i,7,ans[3]) == 0){
                i += 7;
            }else{
                flag = false;
                break;
            }
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}