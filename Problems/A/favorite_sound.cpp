#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int Cnt;

    Cnt = B / A;

    if(C < Cnt){
        Cnt = C;
    }

    cout << Cnt << endl;
}