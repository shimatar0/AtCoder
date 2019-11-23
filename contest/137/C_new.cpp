#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<string, int> mp;

    for(int j = 0; j < N; j++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }

    long long ans = 0;

    for(auto &p : mp){
     int s = p.second;
     ans += (long long)s*(s-1)/2;   
    }
    cout << ans << endl;

}