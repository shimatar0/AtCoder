#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N , L;
    cin >> N >> L;
    int abs_Aji[202], Aji[202];

    for(int i = 0; i < N; i++){
        abs_Aji[i] = abs(L + i );
            Aji[i] = L + i ;
    }

    sort(abs_Aji,abs_Aji + N);

    int sum = 0;
    if(abs_Aji[0] == 0){
        for(int j = 0; j < N; j++){
//            cout << Aji[j] << endl;
            sum += Aji[j];
        }
    }else{
        for(int k = 0; k < N; k++){
//            cout << Aji[k] << endl;
            sum += Aji[k];
        }
//        cout << "0::" << abs_Aji[0] << endl; 
        if(sum < 0)
            sum = sum + abs_Aji[0];
        else
            sum = sum - abs_Aji[0];
    }

    cout << sum << endl;
}