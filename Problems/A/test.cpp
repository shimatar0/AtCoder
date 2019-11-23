#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int m,n,k;
    cin >> m >> n >> k;
    vector<int>A(k),T(k);

    for(int i = 0; i < k; i++){
        int in;
        int sum = 0;
        cin >> in;
        if(n > 0){
            A[in]++;
            n--;
        }
        for(int j = 0; j < k; j++){
            if(j != in){
                if(A[j] > 0){
                    A[j]--;
                    sum++;
                }
            }
        }
        A[in] += sum;
    }
    T = A;
    sort(T.begin(),T.end(),greater<int>());
    int Max = T[0];

    for(int i = 0; i < k; i++){
        if(A[i] == Max){
            cout << i << endl;
        }
    }
}