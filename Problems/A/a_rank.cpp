#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    long long s;
    int p,t;
    cin >> s >> p;
    t = p;
    for(int i = 0; i < t; i++){
        if((s * 101 / 100) > s){
            s = (s * 101 / 100);
            p--;
        }else{
            s = (s * (100 + p) / 100);
            break;
        }
    }

    cout << s << endl;
}