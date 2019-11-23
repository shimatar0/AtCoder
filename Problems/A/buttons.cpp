#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int A,B,X;
    cin >> A >> B;
    X = 0;
    for(int i = 0; i < 2; i++){
        if(A > B){
            X += A; 
            A--;
        }else{
            X += B;
            B--;
        }
    }

    cout << X << endl;
}