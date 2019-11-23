#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int s;
    
    cin >> s;
    int N[1000005];
    N[0] = s;
    int i = 1;
    bool flag = false;
    while(flag != true){
        if(s % 2 == 0){
            s = s / 2;
            N[i] = s;
        }else{
            s = (3 * s) + 1;
            N[i] = s;
        }
        for(int j = 0; j < i; j++){
            if(s == N[j]){
                flag = true;
            }
        }
        i++;
    }
    cout << i << endl;
}