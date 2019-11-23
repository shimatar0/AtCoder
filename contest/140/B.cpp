#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int A[25], B[55],C[55];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        cin >> B[i];
    }
    
    for(int i = 0; i < n-1; i++){
        cin >> C[i];
    }    

    int ans = 0;
    int pre = 0;

    for(int i = 0; i < n; i++){
        int temp;
        temp = A[i];
        ans += B[temp-1];
        if(i > 0){
            if(pre + 1 == temp - 1){
                ans += C[pre];
            }
        }
        pre = temp - 1;
    }

    cout << ans << endl;
}