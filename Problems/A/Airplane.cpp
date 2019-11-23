#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int P, Q, R;
    cin >> P >> Q >> R;

    int pt1,pt2,pt3;
    pt1 = P + Q;
    pt2 = Q + R;
    pt3 = P + R;
    int min = pt1;
    if(min > pt2){
        min = pt2;
    }
    if(min > pt3){
        min = pt3;
    }
    cout << min << endl;
}