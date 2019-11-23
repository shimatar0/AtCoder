#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a ,b;
    int ans;

    cin >> a >> b;
    int temp = a;
    ans = 0;
    if(b == 1){
        cout << ans << endl;
        return 0;
    }else{
        for(int i = 1; i < 50; i++){
            if(temp >= b){
                ans = i;
                break;
            }else{
                temp += a - 1;
            }
        }
    }
    
    cout << ans << endl;
}