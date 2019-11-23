#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int L[100];
    cin >> N;
    for(int i =0; i < N; i++){
        cin >> L[i];
    }

    int count = 0;
    int tmp [100];
    int cnt = 10;

    for(int j = 0; j < N-1; j++){
        if(L[j] > L[ j + 1]){
            if(count == 0){
              
                tmp[0] = L[j];

                cnt = j;
                count  = 1;
            }else if(count == 1){

                tmp[1] = L[j+1]; 
                L[j+1] = tmp[0];
                L[cnt] = tmp[1];
                count ++;
            }
        }
    }

    bool flag = true;

    if(count != 0){
        for(int k = 0; k < N-1; k++){
             if(L[k] > L[ k + 1]){
                flag = false;
             }
        }
    }


    if(flag == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}