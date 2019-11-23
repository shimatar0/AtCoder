#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    double ans = (w * h) / 2;
    int num;
    if(2 * x == w && 2 * y == h){
        num = 1;
    }else {
        num = 0;
    }

    printf("%.10f %d\n", ans , num);
}