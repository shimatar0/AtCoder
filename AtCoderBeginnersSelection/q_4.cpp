#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    int count = 0;
    cin >> num;

    int A[200];

    for(int i = 0; i < num; i++){
        cin >> A[i];
    }

    while(1){
        bool flag = true;

        for(int j = 0; j < num; j++){
            if(A[j] % 2 != 0){
                flag = false;
                break;
            }else{
                A[j] = A[j] / 2;
            }
        }
        if(!flag){
            break;
        }
        
        count++;
    }

    cout << count << endl;

}