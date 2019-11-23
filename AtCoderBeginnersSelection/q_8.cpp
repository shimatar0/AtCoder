#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int A[100];
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A, A+n, greater<int>());

    int count = 1;
    for(int j = 1; j < n; j++){
        if(A[j - 1] != A[j]){
            count++;    
        }
    }

    cout  << count << endl;
}