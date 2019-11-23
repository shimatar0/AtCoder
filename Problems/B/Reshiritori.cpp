#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s(N);
    for( int i = 0; i < N; i++){
        string re_s;
        cin >> re_s;
        reverse(re_s.begin(), re_s.end());
        s[i] = re_s;
    }

    sort(s.begin(), s.end());

    for(int i = 0; i < N; i++){
        reverse(s[i].begin(), s[i].end()); 
        cout << s[i] << endl;
    }
}