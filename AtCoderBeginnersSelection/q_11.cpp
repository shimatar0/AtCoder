#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int dst_t[100001], dst_x[100001], dst_y[100001];

    dst_t[0] = dst_x[0] = dst_y[0] = 0;

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> dst_t[i] >> dst_x[i] >> dst_y[i];    
    }

    int j = 0;
    bool flag = true;
    int dst_diff_x, dst_diff_y, dst_trans;
    while(j < n){ 
            int dst_diff = 0;
            dst_diff = dst_t[j + 1] - dst_t[j];
            dst_diff_x = dst_x[j + 1] - dst_x[j];
            dst_diff_y = dst_y[j + 1] - dst_y[j];
            
            dst_trans =  abs(dst_diff_x) + abs(dst_diff_y);

            if(dst_trans > dst_diff){
                    flag = false;
                    break;
            }else{
                if((dst_trans % 2 == 0 && dst_diff % 2 != 0) || (dst_trans % 2 != 0 && dst_diff % 2 == 0)){
                    flag = false;
                    break;
                }
            }

            j++;
        }
    
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}