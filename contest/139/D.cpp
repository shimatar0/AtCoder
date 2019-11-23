#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n -1; i++){
        ans += i;
    } 

    cout << ans << endl;
}