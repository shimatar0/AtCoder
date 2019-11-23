#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int A, B;
    int ans;
    cin >> A >> B;

    if ( A % 2 == 0 && B % 2 == 0 || A % 2 != 0 && B % 2 != 0 ){
        ans = abs(B + A) / 2 ;
        cout << ans << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
}