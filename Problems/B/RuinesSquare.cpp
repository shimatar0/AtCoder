#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int x_1, y_1, x_2, y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    int x_3, y_3, x_4, y_4;
    int temp_x,temp_y;

    temp_x = x_2 - x_1;
    temp_y = y_2 - y_1;

    x_3 = x_2 - temp_y;
    y_3 = y_2 + temp_x;

    temp_x = x_3 - x_2;
    temp_y = y_3 - y_2;

    x_4 = x_3 - temp_y;
    y_4 = y_3 + temp_x;

    printf("%d %d %d %d\n",x_3, y_3, x_4, y_4);
}