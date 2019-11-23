#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int a,b;
    cin >> n >> a >> b;

    if((n*a) > b){
        cout << b << endl;
    }else{
        cout << n * a << endl;
    }
}