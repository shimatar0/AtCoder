#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int H, W;
    int h, w;
    cin >> H >> W;
    cin >> h >> w;

    int X;

    X = (H * W) - (h * W) - (w * H) + (h * w);

    cout << X << endl;
}