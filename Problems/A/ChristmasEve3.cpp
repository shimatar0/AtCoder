#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int D;
    cin >> D;
    map<int , string> eve;

    eve[25] = "Christmas";
    eve[24] = "Christmas Eve";
    eve[23] = "Christmas Eve Eve";
    eve[22] = "Christmas Eve Eve Eve";

    cout << eve[D] << endl;
}