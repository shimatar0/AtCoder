#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int A, B, K;
    cin >> A >> B >> K;
    int min_num;
    vector<int> vc;
    int num = 0;
    min_num = min(A, B);
    for(int i = 1; i <= min_num; i++){
        if(A % i == 0 && B % i == 0){
            vc.push_back(i);
            num++;
        }
    }
    sort(vc.begin(), vc.end(), greater<int>());
    cout << vc[K - 1] << endl;
}