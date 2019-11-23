#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N , X;
    int L[200];

    cin >> N >> X;

    for(int i = 0; i < N; i++){
        cin >> L[i];
    }

    int dist[200];
    dist[0] = 0;
    int count = 1;
    for(int j = 1; j <= N; j++){
        dist[j] = dist[j-1] + L[j-1];   

        if(dist[j] <= X){
            count++;
        }
    }

    cout << count << endl;
    
}