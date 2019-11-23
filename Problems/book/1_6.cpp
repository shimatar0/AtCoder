#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int>h(n);

    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int ans = 0;
    vector<int>temp(3);

    for(int i = 0; i < n - 2; i++){
        for(int j = i+1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                temp[0] = h[i];
                temp[1] = h[j];
                temp[2] = h[k];
                sort(temp.begin(), temp.end(), greater<int>());
                if(temp[0] < temp[1] + temp[2]){
                    int sum = h[i] + h[j] + h[k];
                    ans = max(ans, sum);            
                }            
            }
        }
    }

    cout << ans << endl;
}