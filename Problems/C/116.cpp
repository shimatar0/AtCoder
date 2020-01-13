#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int>h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int res = 0;
    for(;;){
        if(*max_element(h.begin(), h.end()) == 0) break;

        int i = 0;
        while(i < n){
            if(h[i] == 0) i++;
            else{
                res++;
                while(i < n && h[i] > 0){
                    h[i]--;
                    i++;
                }
            }
        }
    }
    cout << res << endl;
}