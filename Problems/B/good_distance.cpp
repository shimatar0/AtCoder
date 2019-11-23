#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    int N,D;
    cin >> N >> D;
    int X[20][20];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X[i][j];
        }
    }

    int ans = 0;
    double dist_abs;
    for(int k =0; k < N-1; k++){
        for(int l = k+1; l < N; l++){
            dist_abs = 0;
            for(int z = 0; z < D; z++){
                dist_abs += abs( X[k][z] - X[l][z] ) * abs( X[k][z] - X[l][z] );
            }
            dist_abs = sqrt(dist_abs);
            if(dist_abs == int(dist_abs))
                ans++;
        }
    }
    cout << ans << endl;
}