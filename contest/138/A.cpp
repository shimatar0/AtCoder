#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int a;
    string s;
    cin >> a;
    cin >> s;
    if(a >= 3200){
        cout << s << endl;
    }else{
        cout << "red" << endl;
    }
}