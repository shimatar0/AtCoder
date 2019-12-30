#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
    cin >> s;
    int a[4];
    for(int i = 0; i < 4; i++){
        a[i] = s[i] - '0';
    }

    char op[3];
    bool flag = false;

    for(int bit = 0; bit < (1 << 3); bit++){
        int sum = a[0];
        for(int j = 0; j < 3; j++){
            if(bit & (1 << j)){
                op[j] = '+';
                sum += a[j+1];            
            }else{
                op[j] = '-';
                sum -= a[j+1];
            }
        }
        if(sum == 7){
            break;
        }
    }

    cout << a[0];
    for(int i = 1; i < 4; i++){
        cout << op[i-1] << a[i];
    }
    cout <<"=" << "7" << endl;
}