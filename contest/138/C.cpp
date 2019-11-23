#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main() {
    int N;
    double V[100];
    double ans = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    sort(V, V + N);
    double temp;

    for(int i = 0; i < N - 1; i++){
        temp = (double(V[i]) + double(V[i + 1])) / double(2.0);
        V[i + 1] = temp;
        V[i] = -1;
        sort(V, V + N);
    }
    
    cout << temp << endl;
}