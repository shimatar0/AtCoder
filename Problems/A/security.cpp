#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){      
    string s;   
    cin >> s;
    if( s[0] != s[1] && s[1] != s[2] && s[2] != s[3]){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
}