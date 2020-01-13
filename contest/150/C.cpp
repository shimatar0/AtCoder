#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int> s1(n), s2(n);
    for(int i = 0; i < n; i++){
        cin >> s1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> s2[i];
    }
    vector<int> s_v1(n),  s_v2(n);
    s_v1 = s1;
    s_v2 = s2;
    sort(s_v1.begin(), s_v1.end());
    sort(s_v2.begin(), s_v2.end());
    int a, b;
    int i = 0;
    int j = 0; 
    do{
        if(s_v1 == s1){
            a = i;
            break;
        }
        i++;
    }while(next_permutation(s_v1.begin(), s_v1.end()));

    do{
        if(s_v2 == s2){
            b = j;
            break;
        }
        j++;   
    }while(next_permutation(s_v2.begin(), s_v2.end()));
//    cout << a << b;
    cout << abs(a - b) << endl;
}