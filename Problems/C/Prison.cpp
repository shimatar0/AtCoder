#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int r_min, l_max;
    l_max = 0;
    r_min = 100005;
    for(int i = 0; i < m; i++){
        int r,l;
        cin >> l >> r;
        l_max = max(l_max , l);
        r_min = min(r_min , r);
    }
    int ans = 0;
    ans = r_min - l_max + 1;
    if(ans < 0){
        cout << "0" << endl;
    }else{
        cout << ans << endl;
    }
}