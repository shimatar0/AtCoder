#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int cnt = 1;
    int next = a[1];

    if(next == 2){
        cout << "1" << endl;
        return 0;
    }else{
        while(cnt != n){
            int temp = a[next];
            next = temp;
            if(next == 2){
                cout << cnt + 1 << endl;
                return 0;
            }
            cnt++;
        }
    }
    cout << "-1" << endl;
}