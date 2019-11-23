#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int antena[5];
    int K;

    for(int j = 0; j < 5; j++){
        cin >> antena[j];
    }
    cin >> K;
    bool flag = true;
    for(int i = 0; i < 5; i++){
        for(int k = i; k < 4; k++){
            if((antena[k+1] - antena[i]) > K ){
                flag = false;
                break;
            }
        }
    }

    if(flag)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
}