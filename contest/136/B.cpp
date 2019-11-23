#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int cnt = 0;
    cin >> N;
    int count = 0;

    for(int i = 1; i <= N; i++){
        count = 1;
        int X = i;
        while((X / 10) != 0){
            X = (X / 10);
            count++;
        }
        if(count % 2 != 0){
            cnt++;
        }
    }

    cout << cnt << endl;       
}