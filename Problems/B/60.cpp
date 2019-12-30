#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    for(int i = a; i <= a * b; i += a){
        if(i % b == c){
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if(flag == 0) cout << "NO" << endl;
}