#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int score;

    pair<pair<string, int>, int> p[120];

    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        cin >> score;
        p[i] = make_pair(make_pair(s, -score), i);
    }

    sort(p, p + N);

    for(int j = 0; j < N; j++){
        cout << p[j].second + 1 << endl;
    }
}