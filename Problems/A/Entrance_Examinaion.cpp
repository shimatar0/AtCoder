#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int X, T;
    cin >> T >> X;
    double Z = (double)T / (double)X;
    cout << fixed << setprecision(10) << Z << endl;
}