#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string S;
    int ans = 1000;
    cin >> S;
//    cout << ((S.length() / 3) * 3) << endl;
    for(int i =  0; i < ((S.length() / 3) * 3); i++){
        int temp = 0;
        int k = 100;
        int x = i;
        for(int j = 0; j < 3; j++){
            temp += (k * (S[x] - '0'));
            k /= 10; 
            x++;
        }
//        cout << temp << endl;
        ans = min(ans, abs(753 - temp));
    }    
        cout << ans << endl;
}