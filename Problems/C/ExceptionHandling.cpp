#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(N),v_1(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        v_1[i] = v[i];
    }
//    copy(v.begin(),v.end(),v_1);
    int Max, Max_2;
    sort(v.begin(), v.end(),greater<int>());
    Max = v[0];
    /*
    for(int i = 1; i < N; i++){
        if(v[0] != v[i]){
            Max_2 = v[i];
        }
    }
    */
   Max_2 = v[1];

    for(int j = 0; j < N; j++){
        if(v_1[j] == Max){
            cout << Max_2 << endl;
        }else{
            cout << Max << endl;
        }
    }

}