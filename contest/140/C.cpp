#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>B(n-1),A(n);
    long long ans = 0;

    for(int i = 0; i < n - 1; i++){
        cin >> B[i];
    }

    ans += B[0];

    for(int j = 0; j < n - 2; j++){
        if(B[j] > B[j+1]){
            B[j] = B[j+1];
        }
    }

    for(int i = 0; i < n-1; i++){
        ans += B[i];
    }
    
    cout << ans << endl;

}