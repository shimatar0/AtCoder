#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n ; ++i){
        double temp  = 1.0 / n;
        int a = i;
        while(a < k ){
            a    *= 2;
            temp /= 2;
        }
        ans +=  temp;
    }        
    printf("%.10f\n",ans);
}