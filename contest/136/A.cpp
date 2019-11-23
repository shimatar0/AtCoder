#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int X;
    X =  A - B;
    if(C > X){
        C = C -X;
    }else{
        C = 0;
    }
    cout << C << endl;   
}