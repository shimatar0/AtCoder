#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int L[200];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> L[i];
    }
    int max,sum;
    sort(L, L+n, greater<int>());
    max = L[0];

    for(int j = 1; j < n; j++){
        sum += L[j];
    }

    if(max < sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    } 

}