#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = n; i <= 999; i++){
        if(i/100 == (i%100)/10 && (i%100)/10 == (i%100)%10){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}