#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int K,X;
    cin >> K >> X;

    int sts,end;

    sts = X - K;
    end = X + K;
    for(int i = sts + 1; i <= end -1; i++){
        cout << i << " ";
    }
    cout << endl;
}