#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    double ans; 
    int tmp = abs(A-B);
    ans = tmp;
    ans = ans / 2; 
    if(ans == int(ans)){
        int ans_2 = abs(A-ans);
        cout << ans_2 << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;   
    }
}